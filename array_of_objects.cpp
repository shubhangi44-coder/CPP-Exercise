//WAP using array of objects

#include<iostream>
#include<conio.h>
using namespace std;

class Employee{
    int id;

    public:
    void setid(){
        cout<<"Enter the id of employee: ";
        cin>>id;
    }

    void getid(){
        cout<<"The id of employee is: "<<id<<endl;
    }
};

int main(){
    Employee E[20];
    for(int i=0; i<=20; i++){
        E[i].setid();
        E[i].getid();
    }
    return 0;
}