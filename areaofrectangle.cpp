/* WAP to print area of rectangle using fuction with argument and return type */

#include<iostream>
#include<conio.h>
using namespace std;
int fun(int l, int w);

int main(){
    int len, width;
    cout<<"Enter the length and width"<<endl;
    cin>>len>>width;
    float a = fun(len,width);
    cout<<"Area of rectangle is"<<a;
    return 0; 
}


int fun(int l, int w){
    float area =l*w;
    return area;
}
