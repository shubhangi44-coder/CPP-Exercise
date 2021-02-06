// WAP to print sum of two complex number by passing objects as function argument

#include<iostream>
#include<conio.h>
using namespace std;

class Complex{
    int a;
    int b;

    public:
    void setdata(int x, int y){
        a=x;
        b=y;
    }

    void sum(Complex o1, Complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }

    void printnumber(){
        cout<<"The complex number is :"<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
    Complex C1,C2,C3;

    C1.setdata(2,4);
    C1.printnumber();

    C2.setdata(1,3);
    C2.printnumber();

    C3.sum(C1,C2);
    C3.printnumber();

    return 0;
}