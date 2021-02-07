//Object as a return type

#include<iostream>
#include<conio.h>
using namespace std;

class Student{
    public:
    int rollno;
    float marks ;
};
//function that return object of Student
Student studentresult(){
    Student stud;
    stud.rollno = 101;
    stud.marks = 95.12;
    cout<<"Student Roll No. is: "<<stud.rollno<<endl;
    cout<<"Student marks are: "<<stud.marks<<endl;
    return stud;
}
int main(){
    Student s1;
    s1 = studentresult();

    return 0;
}