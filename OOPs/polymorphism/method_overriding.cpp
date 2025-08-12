#include<iostream>
using namespace std;
class vehicle{
public:
    void engine(){
        cout<<"This is an  engine";
    }

};
class electric : public vehicle{
public:
    void engine(){
        cout<<"This is an electric engine";
    }

};
int main()
{
    electric e1;
    e1.engine();
    return 0;
}