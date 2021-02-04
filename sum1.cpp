/* WAP to print arithmatic operation of two number using function with argument and return type*/

#include<iostream>
#include<conio.h>
using namespace std;
int fun(int a, int b);

int main(){
    fun(40,8);
    return 0; 
}

int fun(int a, int b){
    int sum = a+b;
    int sub = a-b;
    int div = a/b;
    int mul = a*b;
    cout<<sum<<endl<<sub<<endl<<div<<endl<<mul;
    return sum, sub, div, mul;
    
}