/* WAP to print average using function with no argument and no return type */

#include<iostream>
#include<conio.h>
using namespace std;
int fun(int n1, int n2, int n3, int n4);

int main(){
    float a = fun(4,8,15,86);
    cout<<"The average is"<<a;
    return 0; 
}

int fun(int n1, int n2, int n3, int n4){
    int total=n1+n2+n3+n4;
    float avg= total/4;
    return avg;
   
}
