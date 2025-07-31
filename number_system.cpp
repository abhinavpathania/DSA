#include <iostream>
using namespace std;
void decimal_to_binary(){
    int power=1;
    int ans=0;
    int decimal_number=50;
    while(decimal_number>0){
        int rem=decimal_number%2;
        decimal_number/=2;
        ans+=(rem*power);
        power*=10;
    }
    cout<<ans<<endl;
}
void binary_to_decimal(){
    int ans=0;
    int power=1;
    int binary_number=110010;
    while(binary_number>0){
        int rem=binary_number%10;
        ans+=rem*power;
        power*=2;
        binary_number/=10;
    }
    cout<<ans;
}
int main(){
    decimal_to_binary();
    binary_to_decimal();
}