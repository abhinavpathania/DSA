#include<iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    vector <int> arr={6,8,0,1,3};
    vector <int>ans(arr.size(),0);
    stack <int> stk;
    
    for(int i=arr.size()-1;i>=0;i--){
        //removing
        while(stk.size() > 0 && stk.top() <= arr[i]){
            stk.pop();
        }
        if(stk.empty()) ans[i]=-1;
        else{
            ans[i]=stk.top();
        }
        stk.push(arr[i]);
    }
    for(int val : ans){
        cout<<val<<" ";
    } 

    return 0;
}