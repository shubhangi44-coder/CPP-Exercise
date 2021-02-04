/* WAP to print third angle of triangle using function with argument and return type */

#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;

int thirdang(float ang1, float ang2) 
 { 
       float result;
       result= 180-(ang1+ang2);  
       return result;
 } 
int main()
{
    float angle=thirdang(45.99,81.55); 
    cout<<"Third angle of triangle is"<<angle;
    return 0;
} 