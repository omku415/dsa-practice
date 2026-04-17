#include <bits/stdc++.h>
using namespace std;

class TreeNode
{

public:
    int val;
    TreeNode *left, *right;

    TreeNode(int data)
    {
        val = data;
        left = right = NULL;
    }
};

TreeNode *buildTreeHelper(TreeNode *root, int val)
{
    if (root == NULL)
    {
        return new TreeNode(val);
    }
    if (val > root->val)
    {
        root->right = buildTreeHelper(root->right, val);
    }
    else
    {
        root->left = buildTreeHelper(root->left, val);
    }
    return root;
}

TreeNode *buildTree(vector<int> &buildTree)
{
    TreeNode *root = NULL;
    for (int val : buildTree)
    {
        root = buildTreeHelper(root, val);
    }
    return root;
}

bool search(TreeNode *root, int key)
{
    if (root == NULL)
        return false;
    if (root->val == key)
        return true;
    else if (key < root->val)
        return search(root->left, key);
    else
        return search(root->right, key);

    return false;
}

TreeNode *getInorderSuccessor(TreeNode *root)
{
    while (root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

TreeNode *deleteNode(TreeNode *root, int key)
{
    if (root == NULL)
        return NULL;
    if (key < root->val)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (root->val < key)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            TreeNode *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            TreeNode *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            TreeNode *IS = getInorderSuccessor(root->right);
            root->val = IS->val;
            root->right = deleteNode(root->right, IS->val);
        }
    }
}

void InOrder(TreeNode *root)
{
    if (root == NULL)
        return;

    InOrder(root->left);
    cout << root->val;
    InOrder(root->right);
}

int main()
{
    vector<int> tree{3, 2, 1, 5, 6, 4};
    TreeNode *rootVal = buildTree(tree);
    cout << search(rootVal, 2) << "\n";
    deleteNode(rootVal, 5);
    InOrder(rootVal);
}