/* WAP to print third angle of triangle using function with argument and no return type */

#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;

void thirdang(float ang1, float ang2) 
 { 
       float result;
       result= 180-(ang1+ang2); 
       cout<<result<<endl; 
 } 
int main()
{
    thirdang(45.99,81.55); 
    return 0;
} 