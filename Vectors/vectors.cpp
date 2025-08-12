#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> myvec={1,2,3,4,5};

    myvec.push_back(6);
    myvec.push_back(7);

    for(int val : myvec){ // for each loop of vectors
        cout<<val<<endl;
    }

    myvec.pop_back();

    cout<<"After popping\n";
    for(int val : myvec){ // for each loop of vectors
        cout<<val<<endl;
    }
    
}