#include <iostream>
#include <vector>
using namespace std;

int swap (int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void bubblesort(vector <int> &nums){
    bool isswap=false;
    for(int j=0;j<nums.size()-1;j++){
        for(int i=0; i<nums.size()-1-j;i++){
            if(nums[i]>nums[i+1]){
                swap(nums[i],nums[i+1]);
                isswap=true;
        }
        
    }
    if(!isswap){
            exit;
        }
}
    for(int val:nums){
        cout<<val;
    }
    
}

int main(){
    vector <int> nums={1,8,6,4,7,9,5,2,3};
    bubblesort(nums);
}