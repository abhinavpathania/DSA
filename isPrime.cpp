#include <iostream>
using namespace std;

void isprime_basic(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    bool prime=true;
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
            prime=false;
            break;
        }
    }
    if(prime==false){
        cout<<"Not a Prime Number";
    }
    else{
        cout<<"Prime Number";
    }
}

void isprime_optimised(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    bool prime=true;
    for(int i=2;i*i<=num;i++){ // 
        if(num%i==0){
            prime=false;
            break;
        }
    }
    if(prime==false){
        cout<<"Not a Prime Number";
    }
    else{
        cout<<"Prime Number";
    }
}

int main(){
    int i;
    cout<<"Enter the choice \n1. For optimised approach \n2 For Basic";
    cin>>i;
    switch (i)
    {
    case 1:
        isprime_optimised();
        break;
    
    default:
        isprime_basic();
        break;
    }
}