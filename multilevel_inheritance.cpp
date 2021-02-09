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

class Dept:public Student{

    public:
    void read(){
        cout<<endl<<"The student is from Electrical Department"<<endl;
    }
};

class Sem:public Dept{
    public:
    void show(){
        cout<<endl<<"The semister is 4th"<<endl;

    }
    
};


int main(){
    Sem o1;
    o1.set();
    o1.display();
    o1.read();
    o1.show();

    return 0;
}