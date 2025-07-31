#include <iostream>
#include <vector>
using namespace std;

int binary_search_iterative(vector <int> myvec,int target){
    int start=0;
    int end=myvec.size()-1;

    while(start<=end){
        int mid= start + (end-start)/2;
        if(target>myvec[mid]){
            start=mid+1;
        }
        else if(target<myvec[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }

    }
    return -1;
}

int binary_search_recursion(vector <int> myvec,int target,int start,int end){
    while(start<=end){
        int mid= start + (end-start)/2;
        if(target<myvec[mid])
            return binary_search_recursion(myvec,target,start,mid-1);
        else if (target>myvec[mid])
            return binary_search_recursion(myvec,target,mid+1,end);
        else
            return mid;
    }
    return -1;
}

int main(){
    vector <int> myvec = {1,2,3,4,5,6,7,8,9};
    int target=4;
    int result=binary_search_iterative(myvec,target);
    cout<<"From iterative "<<result<<endl;


    int start=0;
    int end=myvec.size()-1;
    int result_recursion=binary_search_recursion(myvec,target,start,end);
    cout<<"From recursion "<<result_recursion;
}