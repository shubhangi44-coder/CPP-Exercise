/* WAP to print multiplication of two number using function with argument and return type*/

#include<iostream>
#include<conio.h>
using namespace std;

int product(int a, int b);

int main(){
    int x,y,mul;
    mul=product(2,4);
    cout<<"The product of two number is:"<<mul; 
    return 0; 
}

int product(int a, int b){
    int c = a*b;
    cout<<c<<endl;
    return c;


}