#include<iostream>
using namespace std;

class Circular_Queue{
    int *arr;
    int curr_size;
    int cap;
    int r;
    int f;
public:
    Circular_Queue(int size){
        cap=size;
        arr= new int[cap];
        curr_size=0;
        r=-1;
        f=0;
    }
    void push(int val){
        if(curr_size==cap){
            cout<<"Full"<<endl;
            return;
        }
        r=(r+1)%cap;
        arr[r]=val;
        curr_size++;
    }
    void pop(){
        if(curr_size==0){
            cout<<"Empty";
            return;
        }
        f=(f+1)%cap;
        curr_size--;
    }
    int front(){
        if(curr_size==0){
            cout<<"Empty";
            return -1;
        }
        return arr[f];
    }
    bool empty(){
        return curr_size==0;
    }
    void printARR(){
        for (int i = 0; i < cap; i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
    }

};
int main()
{
    Circular_Queue CQ(3);
    CQ.push(1);
    CQ.push(2);
    CQ.push(3);
    CQ.pop();
    CQ.push(4);
    CQ.push(5);
    CQ.pop();
    CQ.push(6);
    CQ.printARR();
    return 0;
}