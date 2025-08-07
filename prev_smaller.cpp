#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr={3,1,0,8,6};
    vector <int> ans(arr.size(),0);
    stack <int> stk;

    for(int i=0;i<arr.size()-1;i++){
        while (stk.size() >0 && stk.top() >= arr[i])
        {
            stk.pop();
        }
        if(stk.empty()) ans[i]=-1;
        else{
            ans[i]=stk.top();
        }
        stk.push(arr[i]);
    }
    for(int val: ans){
        cout<<val<<" ";
    }
    return 0;
}