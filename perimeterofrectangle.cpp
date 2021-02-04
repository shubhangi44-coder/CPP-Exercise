/* WAP to print perimeter of rectangle using function with argument and with return type */

#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;

int peri(int w, int h) 
 { 
       int result;
       result= 2*(w+h); 
       return result;
 } 
int main()
{
    int p = peri(2,4); 
    cout<<"perimeter of rectangle is "<<p;
    return 0;
} 