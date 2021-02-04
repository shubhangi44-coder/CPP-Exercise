/* WAP to print area of rectangle using fuction withaout argument and with return type */

#include<iostream>
#include<conio.h>
using namespace std;
int fun();

int main(){
    
    int a = fun();
    cout<<"Area of rectangle is"<<a;
    return 0; 
}

int fun(){
    int l, w;
    cout<<"Enter the length and width"<<endl;
    cin>>l>>w;
    int area =l*w;
    return area;
}
