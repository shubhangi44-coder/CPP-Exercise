/* WAP to print volume of cylinder using function with argument and return type*/

#include<iostream>
#include<conio.h>
using namespace std;
int fun(int r, int h);

int main(){
    float v=fun(56,41);
    cout<<"volume of cylinder is"<<v;
    return 0;  
}

int fun(int r, int h){
    float Volume= 3.14*r*r*h;
    return Volume;
}