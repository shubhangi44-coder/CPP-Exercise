/*WAP to create class methods*/

#include<iostream>
#include<conio.h>
using namespace std;

//create class Student
class Cpp
{
	public:                             //Access specifier
		int show(){
            cout<<"Hello World"<<endl;
            return 0;
        }

        int display(){
            cout<<"This is cpp class and methods"<<endl;
            return 0;
        }

        int print(){
            cout<<"Lets learn together"<<endl;
            return 0;
        }

};

int main(){

	//ctreating objects
    Cpp obj;

    //calling function
    obj.show();
    obj.display();
    obj.print();

    return 0;

}