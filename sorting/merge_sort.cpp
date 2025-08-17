#include<iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr,int st,int mid,int end){
    int i=st;
    int j=mid+1;
    vector <int> ans;
    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(arr[j]);
            j++;
        }
    }
    while (i<=mid)
    {
        ans.push_back(arr[i]);
        i++;
    }
    while (j<=end)
    {
        ans.push_back(arr[j]);
        j++;
    }

    for(int indx=0;indx<ans.size();indx++){
        arr[indx+st]=ans[indx];
    }
    
}
void merge_sort(vector <int> &arr,int st, int end){
    if(st<end){
        int mid = st+ (end-st)/2;
        merge_sort(arr,st,mid); //left
        merge_sort(arr,mid+1,end); //right

        merge(arr,st,mid,end);
    }
}
int main()
{
    vector <int> arr = {8,5,7,6,9,4,3,2,1};
    int st=0;
    int end=arr.size()-1;
    merge_sort(arr,st,end);

    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}