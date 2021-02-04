/* WAP to print average using function with no argument and with return type */

#include<iostream>
#include<conio.h>
using namespace std;

int fun();

int main(){
    float a = fun();
    cout<<"The average is"<<a;
    return 0; 
}
int fun(){
    int a, b, c, d;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b>>c>>d;
    int total=a+b+c+d;
    float avg= total/4;
    return avg;
}

