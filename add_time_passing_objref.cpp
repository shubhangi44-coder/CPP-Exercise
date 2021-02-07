// WAP for addition of two times using objects passing call by reference
#include <iostream>
#include <conio.h>
using namespace std;

class Time
{
    int hr, min, sec;

public:
    void get()
    {
        cout << "\nEnter Hours : ";
        cin >> hr;

        cout << "\nEnter minutes : ";
        cin >> min;

        cout << "\nEnter seconds : ";
        cin >> sec;
    }
    void display()
    {
        cout << "[ " << hr << ":" << min << ":" << sec << " ]\n";
    }
    void sum(Time &t1, Time &t2);
};

void Time::sum(Time &t1, Time &t2)
{
    sec = t1.sec + t2.sec;
    min = sec / 60;
    sec = sec % 60;
    min = min + t1.min + t2.min;
    hr = min / 60;
    min = min % 60;
    hr = hr + t1.hr + t2.hr;
}
int main(){
    Time t1,t2,t3;
    cout<<"\nEnter first time details : \n";
    t1.get();
    cout<<"\nEnter second time details : \n";
    t2.get();
    cout<<"\\nDisplay first time : ";
    t1.display();
    cout<<"\\nDisplay second time : ";
    t2.display();

    t3.sum(t1,t2);
    cout<<"\nThe sum of two times are : ";
    t3.display();

    return 0;
}