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
        if(head==NULL){
            cout<<"Empty Queue";
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;

    }
    int front(){
        if(head==NULL){
            cout<<"Queue Empty";
            return -1;
        }
        return head->data;
    }
    bool empty(){
        return head==NULL;
    }

};

int main()
{
    Queue Q;
    Q.push(1);
    Q.pop();
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    Q.pop();
    while(!Q.empty()){
        cout<<Q.front()<<" ";
        Q.pop();
    }

    return 0;
}