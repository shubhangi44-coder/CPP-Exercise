/* WAP to print perimeter of rectangle using function with argument and no return type */

#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;

void peri(int w, int h) 
 { 
       int result;
       result= 2*(w+h); 
       cout<<result<<endl; 
 } 
int main()
{
    peri(2,4); 
    return 0;
} 