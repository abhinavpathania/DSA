#include <iostream>
#include <vector>
using namespace std;

int bruteforce(vector<int>&nums,int n){
    int final_sum=INT32_MIN;  
    for(int st=0;st<n;st++){
        int current_sum=0;
        for(int end=0;end<n;end++){
            current_sum+=nums[end];
            final_sum=max(current_sum,final_sum);
        }

    }
    return final_sum;
}

int kadane_algo(vector <int> &nums,int n){
    int final_sum=INT32_MIN;
    int current_sum=0;
    for(int st=0;st<n;st++){
        current_sum+=nums[st];
        final_sum=max(current_sum,final_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
    return final_sum;
}
int main(){
     int n=5;
    vector <int> nums(n);
    //Taking input
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    // int result=bruteforce(nums,n);
    // cout<<result;

    int optimised_result=kadane_algo(nums,n);
    cout<<optimised_result;

}