/* WAP to print sum using function with argument and no return type */

#include<iostream>
#include<conio.h>
using namespace std;

void add(int x, int y) 
 { 
       int result; 
       result = x+y; 
       cout<<"Sum of "<<x<<" and "<<y<<" is "<<result<<endl; 
 } 
int main()
{
    add(2,4);
    add(3,6);
    add(20,40 ); 
    return 0;
} 