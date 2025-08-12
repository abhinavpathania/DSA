#include <iostream>
#include <vector>
using namespace std;

void printsubarray(vector<int>&arr, vector<int> &ans, int i){
    if(i==arr.size()){
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }

    //include

    ans.push_back(arr[i]);
    printsubarray(arr,ans,i+1);

    //backtracking
    ans.pop_back();

    //exclude
    printsubarray(arr,ans,i+1);

}

int main(){
    vector <int> arr= {0,2,3};
    vector <int> ans;
    int i=0;
    printsubarray(arr,ans,i);
    
}