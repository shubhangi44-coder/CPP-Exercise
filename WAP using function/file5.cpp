/* WAP to print average using function with no argument and no return type */

#include<iostream>
#include<conio.h>
using namespace std;
void fun();
int n1=4;
int n2=6;
int n3=8;
int n4=10;
int total;

int main(){
    fun();
    return 0; 
}

void fun(){
    int total=n1+n2+n3+n4;
    float avg= total/4;
    cout<<avg<<endl;
}
