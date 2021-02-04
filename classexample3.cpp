/**/
#include <iostream>
#include<string.h>
using namespace std;

class Student{

   public:
    int id;
    string name;
    string add;

    int display() {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<add<<endl;
        return 0;
    }
};

int main() {
    Student s1;
    s1.id = 1;
    s1.name = "shubh";
    s1.add = "nagpur";
    cout << " =  " << "Student id, name and address is="<<endl<<s1.display()<< endl;
    return 0;
}