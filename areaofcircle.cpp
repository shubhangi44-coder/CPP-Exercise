/* WAP to print area of circle using function with argument and with return type */

#include<iostream>
#include<conio.h>
using namespace std;
int fun(int r);

int main(){
    float a=fun(4);
    cout<<"The area of circle is "<<a;
    return 0; 
}


int fun(int r){
    float area = 3.14*r*r;
    cout<<area<<endl;
    return area;
}
