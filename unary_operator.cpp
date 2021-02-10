#include<iostream>
#include<conio.h>

using namespace std;

class Test{
    int a,b;
    public:
    Test(){
        a=10, b=5;
    }
    void operator ++(){
        a++;
        b++;
    }
    void operator --(){
        a--;
        b--;
    }
    void show(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main(){
    Test t;
    ++t;
    t.show();
    --t;
    t.show();
}
