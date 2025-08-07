#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
        head=tail=NULL;
    }
    void push(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    void pop(){
        Node* temp=head;
        head=head->next;
        

    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

};

int main()
{
    Queue Q;
    Q.push(3);
    Q.push(2);
    Q.push(1);

    Q.print();

    return 0;
}