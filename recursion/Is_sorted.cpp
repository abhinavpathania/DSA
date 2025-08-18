#include<iostream>
#include <vector>
using namespace std;

bool checksorted(vector<int> & nums,int n){
    if(n==0 || n==1){
        return true;
    }

    return (nums[n-1] >= nums[n-2]) && checksorted(nums,n-1);
}
int main()
{
    vector<int> nums={1,2,3,4,5,6,7,8};
    bool result=checksorted(nums,nums.size());
    cout<<result;
    return 0;
}