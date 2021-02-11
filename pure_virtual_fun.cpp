#include<iostream>
#include<conio.h>
using namespace std;

class One{
    public:
    virtual void dis(){
        cout<<"One";
    }
};

class Two:public One{
    public:
    void dis(){
        cout<<"Two";
    }
};
int main(){
    One ob1, *obptr;
    obptr=&ob1;
    obptr->dis();

    Two ob2;
    obptr=&ob2;
    obptr->dis();
    getch();
}