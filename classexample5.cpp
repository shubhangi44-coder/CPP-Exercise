/*WAP to create object of class and access class attributes*/

#include<iostream>
#include<conio.h>
using namespace std;

//create class Student
class Student
{
	public:                             //Access specifier
		int id;
        string name;                           //Attributes
        float percent;
};

int main()
{
	Student s1, s2;                          //Obect creation
    
    s1.id = 101;
    s1.name = "Shubh";                      //Accessing attributes and setting the value
    s1.percent = 88.44;

    s2.id = 102;
    s2.name = "Vishu";
    s2.percent = 91.44;

    cout<<"Student Details are as follows:"<<endl<<endl;
    cout<<"Student id is:"<<" "<<s1.id<<endl;
    cout<<"Student name is:"<<" "<<s1.name<<endl;
    cout<<"Student percentage is:"<<" "<<s1.percent<<endl<<endl;

    cout<<"Student id is:"<<" "<<s2.id<<endl;
    cout<<"Student name is:"<<" "<<s2.name<<endl;
    cout<<"Student percentage is:"<<" "<<s2.percent<<endl;
    
    return 0;
}