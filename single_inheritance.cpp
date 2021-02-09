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

class Exam:public Student{

    public:
    string paper1;
    string paper2;
    void setpaper(){
        cout<<endl<<endl<<"Enter the paper1 : ";
        cin>>paper1;
        cout<<"Enter the paper2 : ";
        cin>>paper2;
    }
    void dispaper(int x, int y){
        cout<<"The marks in paper1 is: "<<paper1<<"="<<x<<endl;
        cout<<"The marks in paper2 is: "<<paper2<<"="<<y<<endl;
    }
};
int main(){
    Exam o1, o2;
    o1.set();
    o1.display();
    o2.setpaper();
    o2.dispaper(91,88);
    return 0;
}