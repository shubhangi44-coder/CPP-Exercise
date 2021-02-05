/*WAP to create class methods outside of the class using scope resolution operator*/

#include<iostream>
#include<conio.h>
using namespace std;

//create class Student
class Cpp
{
	public:                             //Access specifier

    //function declaration
    int show();
    int display();
    int print();
		
};

//defining the fuction outside the class using scope resolution operator (::)

int Cpp::show(){
            cout<<"Hello World"<<endl;
            return 0;
        }

int Cpp::display(){
            cout<<"This is cpp class and methods"<<endl;
            return 0;
        }

int Cpp::print(){
            cout<<"Lets learn together"<<endl;
            return 0;
        }


int main(){

	//ctreating objects
    Cpp obj;

    //calling function
    obj.show();
    obj.display();
    obj.print();

    return 0;

}