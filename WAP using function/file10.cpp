/* WAP to print volume of sphere using function with argument and no return type */

#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;

void volcube(int side) 
 { 
       float result;
       result= (side*side*side); 
       cout<<"The volume of cube is"<<endl<<result<<endl; 
 } 
int main()
{
    volcube(8); 
    return 0;
} 