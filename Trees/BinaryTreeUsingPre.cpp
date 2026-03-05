#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

static int idx = -1;
Node *convertToTree(vector<int> &preIndex)
{
    idx++;
    if (idx >= preIndex.size() || preIndex[idx] == -1)
        return NULL;

    Node *root = new Node(preIndex[idx]);
    root->left = convertToTree(preIndex);
    root->right = convertToTree(preIndex);

    return root;
}

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    vector<int> preIndex = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *rooti = convertToTree(preIndex);
    preOrder(rooti);
    cout<<"\n";
    inOrder(rooti);
    cout<<"\n";
    postOrder(rooti);
}