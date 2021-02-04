/* WAP to print third angle of triangle using function without argument and with return type */

#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;

int thirdang() 
 {
     float ang1, ang2;
     cout<<"Enter the value of first and sencond angle"<<endl;
     cin>>ang1>>ang2;
     float result= 180-(ang1+ang2);
     return result;
 } 
int main()
{
    float angle=thirdang(); 
    cout<<"Third angle of triangle is"<<angle;
    return 0;
} 