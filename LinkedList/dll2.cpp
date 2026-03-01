#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};

class dll
{
    Node *head;

public:
    dll()
    {
        head = NULL;
    }

    void arrToDll(int arr[])
    {

        head = new Node(arr[0]);
        Node *back = head;
        for (int i = 1; i <= 4; i++)
        {
            Node *temp = new Node(arr[i]);
            temp->prev = back;
            back->next = temp;
            back = temp;
        }
    }

    void insertBeforeHead(int val){
        Node * newNode = new Node(val);
        newNode->prev=NULL;
        newNode->next=head;
        head->prev=newNode;
        head=newNode;

    }

    void inserAtTail(int val){
        Node * tail =head;
        while(tail->next!=NULL){
            tail= tail->next;
        }
        Node * back= tail->prev;
        Node * newNode= new Node(val);
        newNode->prev=back;
        newNode->next=tail;
        back->next=newNode;
        tail->prev=newNode;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    dll hi;

    hi.arrToDll(arr);
    hi.insertBeforeHead(6);
    hi.inserAtTail(9);
    hi.display();
}