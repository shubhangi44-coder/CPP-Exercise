/*WAP for virtual base class using multiple inheritance */

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

class Dept1:virtual public Student{

    public:
    void show(){
        cout<<endl<<"The student is from Electrical Department"<<endl;
    }
};

class Dept2:virtual public Student{
   public:
    void dis(){
        cout<<"The Student is form computer department"<<endl;

    } 
};

class Details: virtual public Dept1, virtual public Dept2{
    public:
    void details(){
        cout<<endl<<"Student details"<<endl;
    }

};
int main(){
    Details o1;
    o1.details();
    o1.set();
    o1.display();
    o1.show();

    o1.details();
    o1.set();
    o1.display();
    o1.dis();

    return 0;
}