/*WaAP to assign value to private data member without using constructor*/

#include<iostream>
#include<conio.h>
using namespace std;

class Student{
    private:                          //private access specifier
    int id;
    string name;
    float percent;

    public:
    void setvalue(){
        id=101;
        name="Shubh";
        percent=89.74;
    }

    void show(){
        cout<<"Student id:"<<" "<<id<<endl;
        cout<<"Student name:"<<" "<<name<<endl;
        cout<<"Student percentage:"<<" "<<percent<<endl;
    }
};

int main(){
    Student s1;
    s1.setvalue();
    s1.show();

    return 0;
}