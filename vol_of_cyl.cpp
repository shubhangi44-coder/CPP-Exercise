/* WAP to print volume of cylinder using function without argument and with return type*/

#include<iostream>
#include<conio.h>
using namespace std;

int fun();

int main(){
    float vol=fun();
    cout<<"volume of cylinder is"<<vol<<endl;
    return 0;  
}

int fun(){
    int r, h;
    cout<<"Enter the radius and height"<<endl;
    cin>>r>>h;
    float Volume= 3.14*r*r*h;
    return Volume;
}