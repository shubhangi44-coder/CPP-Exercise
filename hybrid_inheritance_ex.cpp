// WAP using hybrid inheritance

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Student{
    public:
    void get(int id,string name,string add){
        cout<<"The Student id is:"<<" "<<id<<endl;
        cout<<"The Student name is:"<<" "<<name<<endl;
        cout<<"The Student address is:"<<" "<<add<<endl;
    }
};

class School:public Student{
    public:
    void show(){
        cout<<"The student is form Shree Samarth School of Science, Ghatanji"<<endl<<endl;
    }

};

class Employee{
    public:
    void getemp(int id,string name,string add){
        cout<<"The Employee id is:"<<" "<<id<<endl;
        cout<<"The Employee name is:"<<" "<<name<<endl;
        cout<<"The Employee address is:"<<" "<<add<<endl;
    }

};

class Details:public Employee, public Student{
    public:
    void company(){
        cout<<"This the employee of Probuz Solution (IT dept.)"<<endl;
    }

};

int main(){
    cout<<"These are the details of student"<<endl;
    School s1;
    s1.get(101, "Shubh", "Pune");
    s1.show();

    cout<<"These are the details of employee"<<endl;
    Details e1;
    e1.getemp(1001,"Shubhangi", "Nagpur");
    e1.company();

    return 0;   
}