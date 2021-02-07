//WAP for object passing by reference
//After calling function : objects pass by reference and the changes made will reflected in the original

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

    void myfunction(Pass &t1, Pass &t2){
        t1.a = 1000;
        t1.b = 2000;
        t2.a = 3000;
        t2.b = 4000;
       
    }
};

int main(){
    Pass o1, o2, o3;
    o1.getdata(10,20);
    o2.getdata(30,40);
    o1.showdata();
    o2.showdata();
    cout<<endl<<endl<<"After calling function : objects pass by reference and the changes made will reflected"<<endl;
    o3.myfunction(o1,o2);
    o1.showdata();
    o2.showdata();
    

    return 0;

}