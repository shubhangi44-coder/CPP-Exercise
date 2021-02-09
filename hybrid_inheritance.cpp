// WAP to demonstrate an example of hybrid inheritance
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

class Sport{
    public:
    string sport1, sport2;
    
    void setsport(){
        cout<<endl<<endl<<"Enter the sport name : ";
        cin>>sport1;
        cout<<"Enter the sport name : ";
        cin>>sport2;
    }
    void dissport(int u, int v){
        cout<<"First sport score is  : "<< sport1<<"="<<u<<endl;
        cout<<"Second sport score is : "<< sport2<<"="<<v<<endl;
    }

};
class Result : public Exam, public Sport {

    public:

    void totalmarks(int a, int b, int c, int d){
        cout<<endl<<endl<<"The total marks of Student in exam are : ";
        int t1=a+b;
        cout<<t1<<endl;
        cout<<"The total marks of Student in sport are: ";
        int t2=c+d;
        cout<<t2<<endl;
    }

};

int main(){
    Result o1, o2, o3, o4;
    o1.set();
    o1.display();
    o2.setpaper();
    o2.dispaper(91,88);
    o3.setsport();
    o3.dissport(20,20);
    o4.totalmarks(91,88,10,20);
    return 0;
}