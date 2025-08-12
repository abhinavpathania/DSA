#include<iostream>
#include <vector>
using namespace std;

vector<int> pair_sum(vector <int>&vec,int target){
    int start=0;
    int end=vec.size()-1;
    vector <int> result_ij;

    while(start<end){

        int sum=vec[start]+vec[end];
        if(sum>target)
            end--;
        else if(sum<target)
            start++;
        else{
            result_ij.push_back(start);
            result_ij.push_back(end);
            start++;
            end--;
        }
    }
    return result_ij;


}
int main()
{
    vector<int> myvec={1,2,3,4,5,6,7,8,9};
    int target=9;
    vector<int> result=pair_sum(myvec,target);
    for(int val : result){
        cout<<val<<" ";
    } 
    
}