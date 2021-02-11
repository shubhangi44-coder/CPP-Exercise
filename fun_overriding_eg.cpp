
#include<iostream>
#include<conio.h>
using namespace std;

class Base {
    public:
    void print() {
        cout << "Base" << endl;
    }
};

class Derived : public Base {
    public:
    void print() {
        cout << "Derived" << endl;
    }
};

int main() {
    Derived d1,d2;
    d1.print();
    d2.Base::print();

    return 0;
}