/* WAP to print perimeter of rectangle using function without argument and with return type */

#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;

int peri()
{
    int w,h;
    cout<<"Enter width and height"<<endl;
    cin>>w>>h;
    int result= 2*(w+h);
    return result;
 } 
int main()
{
    int p = peri(); 
    cout<<"perimeter of rectangle is "<<p;
    return 0;
} 