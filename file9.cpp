/* WAP to print volume of sphere using function with argument and no return type */

#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;

void volsphere(float radius) 
 { 
       float result;
       result= (4*3.14*radius*radius*radius)/3; 
       cout<<"The volume of sphere is"<<endl<<result<<endl; 
 } 
int main()
{
    volsphere(4); 
    return 0;
} 