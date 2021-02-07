//WAP for boject passing by value
//After calling function : objects pass by value and the changes made will not reflected in the original

#include<iostream>
#include<conio.h>
using namespace std;

class Pass{
    private:
    int a, b;

    public:
    void getdata(int x, int y){
        a=x;
        b=y;
    }

    void showdata(){
        cout<<endl<<"a = "<<a;
        cout<<endl<<"b = "<<b;
    }

    void myfunction(Pass t1, Pass t2){
        t1.a = 100;
        t1.b = 200;
        t2.a = 300;
        t2.b = 400;
       
    }
};

int main(){
    Pass o1, o2, o3;
    o1.getdata(10,20);
    o2.getdata(100,200);
    o1.showdata();
    o2.showdata();
    cout<<endl<<endl<<"After calling function : objects pass by value and the changes made will not reflected"<<endl;
    o3.myfunction(o1,o2);
    o1.showdata();
    o2.showdata();
    

    return 0;

}