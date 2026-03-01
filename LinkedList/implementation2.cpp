#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
 class LinkedList{
    Node * head;
public:
   LinkedList(){
    head=NULL;
   }
    void push_front(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
        head=newNode;
        return;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }

    void Print(){
        Node * temp = head;
        while(temp!=NULL){
            cout<<temp->data;
            temp= temp->next;
        }
    }
 };

int main(){
    LinkedList LL;
    LL.push_front(10);
    LL.push_front(20);
    LL.Print();
}