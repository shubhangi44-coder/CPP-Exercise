#include<iostream>
#include<conio.h>

using namespace std;

class Binary{
    int a,b;
    public:
    void set(int x, int y){
        a=x;
        b=y;
    }
    void operator +(Binary cob2){
        int c=a+cob2.a;
        int d=b+cob2.b;
        cout<<c<<d;
    }
    void display(){
        cout<<a<<b;
        
    }

};
int main(){
    Binary ob1,ob2;
    ob1.set(2,4);
    ob2.set(1,3);
    ob1+ob2;
    return 0;
}