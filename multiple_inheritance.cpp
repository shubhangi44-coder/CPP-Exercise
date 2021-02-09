/*WAP using multiple inheritance (multiple base class and having a single derived class aquiring the poperties of base class)*/

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

class Staff{

    public:
    void read(){
        cout<<endl<<"The student is from Electrical Department"<<endl;
    }
};

class College:public Staff, public Student{
    public:
    void show(){
        cout<<endl<<"The Student is form DES COET, Amravati University"<<endl;

    }   
};

int main(){
    College o1;
    o1.set();
    o1.display();
    o1.read();
    o1.show();

    return 0;
}