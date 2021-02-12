#include <iostream>
#include <conio.h>
using namespace std;

class Time{
    public:
    int hr, min, sec;
    void get(){
        cout<<"Enter the time : "<<endl;
        cin>>hr>>min>>sec;
    }

    void show(){
        cout<<"The Entered time is : "<<hr<<" : "<<min<<" : "<<sec;
    }
};

int main(){
    Time t, *tptr;
    tptr = &t;
    tptr->get();
    tptr->show();

    return 0;
}