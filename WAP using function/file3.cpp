/* WAP to print volume of cylinder using function with no argument and no return type*/

#include<iostream>
#include<conio.h>
using namespace std;
void fun();
int r=4;
float height=12.44;
float pi=3.14;

int main(){
    fun();
    return 0;  
}

void fun(){
    float Volumecyl= 3.14*r*r*height;
    cout<<Volumecyl<<endl;
}