#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class LinkedList{
    Node *head;
    Node *tail;
public:
    LinkedList(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node * newNode = new Node(val); //dynamic new node is created
        if(head==NULL){ //if the linked list is empty
            head=tail=newNode;
            return;
        }
        else{
            //As new node is pointer, so we are derefrencing it and using its properties,
            //will be execued as (*newnode).next=head
            newNode->next=head;  
            head=newNode; //updated the head value
            return;
        }
    }
    void push_back(int val){
        Node * newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty";
        }
        else{
            Node * temp = head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
    void pop_back(){
        if(head==NULL){
            cout<<"LL is empty";
        }
        else{
            Node * temp=head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
    }

    void insert(int val, int pos){
        if(pos<0){
            return;
        }
        else if(pos==0){
            push_front(val);
            return;
        }
        else{
            Node * temp=head;
            for(int i=0;i<pos-1;i++){
                if(temp->next == NULL)
                {
                    cout<<"Invalid Position";
                }
                temp=temp->next;
            }
            Node * newNode = new Node(val);
            newNode->next=temp->next;
            temp->next=newNode;
        }
    }
    int search(int val){
        Node * temp=head;
        int pos=0;
        while(temp->next!=NULL){
            if(temp->data==val){
                return pos;
            }
            temp=temp->next;
            pos++;
        }
        return -1;
    }
    void print(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
int main()
{
    LinkedList ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.pop_front();
    ll.pop_back();
    ll.insert(8,3);
    ll.print();
    int result=ll.search(8);
    cout<<endl<<result;

    return 0;
}