/* WAP to print multiplication of two number using function with no argument and with return type*/

#include<iostream>
#include<conio.h>
using namespace std;

int product();

int main(){
    int x,y,mul;
    mul=product();
    cout<<"The product of two number is:"<<mul; 
    return 0; 
}

int product(){
    int a,b;
    cout<<"Enter the number:"<<endl;
    cin>>a>>b;
    int c = a*b;
    cout<<c<<endl;
    return c;


}