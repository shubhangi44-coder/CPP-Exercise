/*WAP using heirarchical inheritance (if more than one class is inherited from the base class then known as heirarchical inheritance)*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int id;
char name[20];
char add[20];
 
class Student{
    
    public:
    
    void set(){
        cout<<"Enter the student id : ";
        cin>>id;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter address : ";
        cin>>add;
    }

    void display(){
        cout<<endl<<endl<<"Student id : "<<id<<endl;
        cout<<"Student name : "<<name<<endl;
        cout<<"Student address : "<<add<<endl;
    }
};

class EE:public Student{

    public:
    void read(){
        cout<<endl<<"The student is from Electrical Department"<<endl;
    }
};

class CSE:public Student{
    public:
    void show(){
        cout<<endl<<"The Student is form CSE Depertment"<<endl;
    }   
};
class EXTC:public Student{
    public:
    void dis(){
        cout<<endl<<"The Student is form EXTC Department"<<endl;

    }   
};

int main(){
    
    cout<<"Student details form dept1"<<endl;
    EE o1;
    o1.set();
    o1.display();
    o1.read();

    cout<<endl<<"Student details form dept2"<<endl;
    CSE o2;
    o2.set();
    o2.display();
    o2.show();

    cout<<endl<<"Student details form dept3"<<endl;
    EXTC o3;
    o3.set();
    o3.display();
    o3.dis();
    
    return 0;
}