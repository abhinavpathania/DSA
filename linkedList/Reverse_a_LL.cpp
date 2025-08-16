#include <iostream>
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
class LinkedList{
    Node * head;
    Node * tail;
public:
    LinkedList(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node * newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        newNode->next = head;
        head=newNode;
    }
    void reverse_linked_list(){
        Node * prev= NULL;
        Node * curr = head;
        

        while(curr!=NULL){
            Node * next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        tail=head;
        head=prev;
    }
    void print(){
        Node * temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    LinkedList l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    l1.push_front(5);
    l1.print();
    l1.reverse_linked_list();
    l1.print();

}