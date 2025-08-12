#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node * next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class CircularLL{
    Node * head;
    Node * tail;
public:
    CircularLL(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node * newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
            newNode->next=head;
            return;
        }
        newNode->next=head;
        head=newNode;
        tail->next=head;
    }
    void push_back(int val){
        Node * newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
            return;
        }
        newNode->next=head;
        tail->next=newNode;
        tail=newNode;
    }
    void pop_front(){
        if(head==NULL){
            cout<<"Empty LL";
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
            Node *temp=head;
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
            temp=NULL;
        }
    }
    void pop_back(){
        if(head==NULL)
        {
            cout<<"Empty ll";
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
            Node * prev=head;
            Node * temp=tail;

            while(prev->next!=tail){
                prev=prev->next;
            }
            tail=prev;
            tail->next=head;

            temp->next=NULL;
            delete temp;
        }
    }

    void print(){
        if(head==NULL) return ;
        Node * temp=head;
        do{
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        while(temp!=head);
        cout<<temp->data;
    }

};
int main()
{
    CircularLL ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.pop_front();
    ll.pop_back();

    ll.print();
    return 0;
}