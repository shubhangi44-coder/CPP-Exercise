
#include<iostream>
#include<conio.h>
using namespace std;

class Base {
    public:
    void dis() {
        cout << "Base" << endl;
    }
};

class Derived : public Base {
    public:
    void dis() {
        cout << "Derived" << endl;
    }
};

int main() {
    Derived d1,d2;
    Base*ptr = &d1;

    // calling function of Base class using ptr
    ptr->dis();
    d2.dis();

    return 0;
}