#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node * next;
    Node * prev;

    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;        

    }

};

class Doublyll{
    Node* head;
public:
    Doublyll(){
        head=NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        return;
    }
    void push_back(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node * temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        newNode->prev=temp;
        temp->next=newNode;

    }
    void pop_front(){
        if(head==NULL){
            cout<<"Empty LL";
        }
        Node* temp=head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        
        if(head==NULL){
            cout<<"Empty LL";
        }
        if(head->next==NULL){
            delete head;
            head=NULL;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->prev->next=NULL;
        delete temp;

    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL";
    }

    
};
int main()
{
    Doublyll ll;
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    ll.pop_front();
    ll.pop_back();
    ll.print();
    return 0;
}