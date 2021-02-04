/* WAP to print area of rectangle using fuction with no argument and no return type */

#include<iostream>
#include<conio.h>
using namespace std;
void fun();
int length=45;
float width=32.14;

int main(){
    fun();
    return 0; 
}


void fun(){
    float area =length*width;
    cout<<area<<endl;
}
