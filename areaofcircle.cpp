/* WAP to print area of circle using function with no argument and with return type */

#include<iostream>
#include<conio.h>
using namespace std;
int fun();

int main(){
    float a=fun();
    cout<<"The area of circle is "<<a;
    return 0; 
}


int fun(){
    int r;
    cout<<"Enter the radius:"<<endl;
    cin>>r;
    float area = 3.14*r*r;
    cout<<area<<endl;
    return area;
}
