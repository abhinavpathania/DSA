#include<iostream>
#include <vector>
#include <stack>
using namespace std;

void stock_span(vector<int> &prices,vector<int> &ans,stack <int> &stk){
    for(int i=0;i<prices.size();i++){
        while(stk.size() >0 && prices[i] >= prices[stk.top()]){
            stk.pop();
        }
        if(stk.empty()){
            ans[i]=i+1;
        }
        else{
            ans[i]=i-stk.top(); //i-prevHigh
        }
        stk.push(i);
    }
    for(int val: ans){
        cout<<val<< " ";
    }
}
int main()
{
    vector<int> prices={100,80,60,70,60,75,85};
    vector<int> ans(prices.size(),0);
    stack<int> stk;

    stock_span(prices,ans,stk);
    return 0;
}