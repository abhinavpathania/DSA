#include<iostream>
#include <vector>
using namespace std;

int partition(vector <int> &arr,int st,int end){
    int stIndx=st-1;
    int pivot=arr[end];
    for (int i = st; i < end; i++)
    {
        if(arr[i]<=pivot){
            stIndx++;
            swap(arr[stIndx],arr[i]);
        }
    }

    stIndx++;
    swap(arr[stIndx],arr[end]);
    return stIndx;
}

void quick_sort(vector <int> &arr,int st,int end){
    if(st<end){
    int pivIndx=partition(arr,st,end);
    quick_sort(arr,st,pivIndx-1);
    quick_sort(arr,pivIndx+1,end);
    }
}
int main()
{
    vector<int> arr={1,5,3,2,7,9,4,8,5,3};
    quick_sort(arr,0,arr.size()-1);

    for(int val:arr){
        cout<<val<<" ";
    }

    return 0;
}