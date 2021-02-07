//WAP for student details using class with scope resolution operator

#include <iostream>
using namespace std;
class Student
{
private:
    char name[20], roll[10], branch[10];
    int sem;

public:
    void details();
    void display();
};
void Student::details()
{
    cout << "Enter your name:";
    cin >> name;
    cout << "Enter roll number.:";
    cin >> roll;
    cout << "Enter branch:";
    cin >> branch;
    cout << "Enter Semister:";
    cin >> sem;
}
void Student::display()
{
    cout << endl<<"Student Name: " << name<<endl;
    cout << "Roll number: " << roll<<endl;
    cout << "Branch: " << branch<<endl;
    cout << "Sem: " << sem<<endl;
}
int main()
{
    Student s;
    s.details();
    s.display();
}