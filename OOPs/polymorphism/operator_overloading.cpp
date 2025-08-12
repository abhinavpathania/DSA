#include<iostream>
using namespace std;

class complex{
public:
    int real;
    int imag;

    complex(){
        real=imag=0;
    }
    complex(int real,int imag){
        this->real=real;
        this->imag=imag;
    }

    //binary operator overloaded
    complex operator + (complex c){
        complex temp;
        temp.real=real+c.real; // real is of c1 and c.real is of c2.
        temp.imag=imag+c.imag;
        return temp;
    }
    void operator ++(){  //pre-increment
        ++real;
        ++imag;
    }
    void operator ++(int){ //post-increment
        real++;
        imag++;
    }
};
int main()
{
    complex c1(2,1),c2(3,1);
    complex c3;
    c3=c1+c2; // compiler reads it like c1.add(c2)
    cout<<c3.real<<"+"<<c3.imag<<"i"<<endl;
    //for unary operators.
    complex unary_c;
    ++unary_c;
    cout<<"Pre-increment "<<unary_c.real<<endl;
    unary_c++;
    cout<<"Post-increment "<<unary_c.real;
    return 0;
}