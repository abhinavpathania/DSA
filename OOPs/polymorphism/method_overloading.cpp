#include<iostream>
using namespace std;

class addition{
public:
    void sum(int a,int b){
        cout<<"Sum of intergers "<<a+b<<endl;
    }
    void sum(float a,float b){
        cout<<"Sum of float "<<a+b;
    }
    
};
int main()
{
    addition a1;
    a1.sum(1,2);
    a1.sum(1.0f,2.0f);
    return 0;
}