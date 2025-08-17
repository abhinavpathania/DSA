#include<iostream>
#include <vector>
using namespace std;

void selectionsort(vector<int> &nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){ // for Total array
        int si=i; // Kept index where next smallest element is present !
        for(int j=i+1;j<n;j++){ // find minimum from (i+1) till 'i' array is sorted!
            if(nums[j]<nums[si]){
                si=j;
            }
            swap(nums[si],nums[i]); // swapped min element with its current position element
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