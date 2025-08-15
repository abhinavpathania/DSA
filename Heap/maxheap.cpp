#include<iostream>
using namespace std;

class Heap{
public:
    int arr[100];
    int size;
    Heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index >1){
            int parent= index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void delete_from_heap(){
        arr[1]=arr[size];
        size--;
        int index=1;
        while(index<size){
            int leftIndex=2*index;
            int rightIndex=2*index + 1;

            if(leftIndex<size && arr[leftIndex] > arr[index]){
                swap(arr[leftIndex],arr[index]);
                index=leftIndex;
            }
            else if (rightIndex < size && arr[rightIndex] > arr[index]){
                swap(arr[rightIndex],arr[index]);
                index=rightIndex;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};

void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i + 1;
    if(left <=n && arr[left] > arr[largest])
    {
        largest=left;
    }
    if(right <=n && arr[right] > arr[largest])
    {
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest); 
    }
}
int main()
{
    Heap h1;
    h1.insert(50);
    h1.insert(60);
    h1.insert(25);
    h1.insert(40);
    h1.insert(20);
    h1.delete_from_heap();

    int arr[8]={ -1,9, 4, 3, 8, 10, 2, 5 };
    int n=7;

    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}