#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Base{
    public:
    int a;
    virtual void get()=0;
    
};

class Derived:public Base{
    public:
    int y;
    void get(){
        cout<<"get() called";
    }
};

int main(){
    Derived d;
    d.get();
}
