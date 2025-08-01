#include<iostream>
#include <vector>
using namespace std;

void selectionsort(vector<int> &nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        int si=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[si]){
                si=j;
            }
            swap(nums[si],nums[i]);
        }

    }
    for(int val: nums){
        cout<<val;
    }
}

int main(){
    vector <int> nums={1,8,6,4,7,9,5,2,3};
    selectionsort(nums);
}