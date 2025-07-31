#include <iostream>
using namespace std;

int fact(int a){
    if(a==1 || a==0){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
void binomial_coefficient(){
    int n=0,r=0;
    cin>>n>>r;
    int eval= fact(n)/(fact(r)*fact(n-r));
    cout<<eval;
}

int main(){
    binomial_coefficient();
    return 0;

}