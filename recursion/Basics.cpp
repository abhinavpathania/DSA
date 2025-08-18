#include<iostream>
using namespace std;

void hello(int val){
    if(val==10){
       return;
    }
    val++;
    hello(val);
    cout<<val<<endl;
}
int main()
{
    int val;
    hello(1);

    return 0;
}