/* WAP to swap variables using reference */

#include<iostream>
#include<conio.h>
using namespace std;

void swap (int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
int main()
{
    int a = 2, b = 4;
    swap( a, b );
    cout << a << " " << b;
    return 0;
}