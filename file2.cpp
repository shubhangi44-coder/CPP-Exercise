/* WAP to print sum of two number using function with no argument and no return type*/

#include<iostream>
#include<conio.h>
using namespace std;
void fun();
int a=4;
int b=2;

int main(){
    fun();
    return 0; 
}

void fun(){
    int sum = a+b;
    int sub = a-b;
    int div = a/b;
    int mul = a*b;
    cout<<sum<<endl<<sub<<endl<<div<<endl<<mul;

}