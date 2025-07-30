#include <iostream>
using namespace std;

void first(){
    int n=5;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j = 1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void second(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void third(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;

    }

}
void fourth(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
    cout<<endl;
    }
}
void fifth(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void floyds_triangle(){
    int n=5;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void seventh(){
    int n=5;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout<<num;
        }
        num++;
        cout<<endl;
    }
}

void inverted_pattern(){
    int n=4;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int l=i-1;l>0;l--){
            cout<<l;
        }
        cout<<endl;
    }

}

int main(){
    int i;
    cout<<"Enter the choice: ";
    cin>>i;
    switch(i)
    {
    case 1:
        first();
        break;
    case 2:
        second();
        break;
    case 3:
        third();
        break;
    case 4:
        fourth();
        break;
    case 5:
        fifth();
        break;
    case 6:
        floyds_triangle();
    case 7:
        seventh();
    case 8:
        inverted_pattern();
        break;
    default:
        break;
    }
}