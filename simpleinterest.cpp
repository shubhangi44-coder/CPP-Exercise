/*WAP to find simple interest using fuction with default argument*/

#include<iostream>
#include<conio.h>

using namespace std;
int interest(int p, int t, float r=7);

int interest(int p,  int t, float r){
    return(p*r*t)/100;
}

int main(){
    int i=interest(10000,1);
    cout<<"Simple Interest is:"<<" "<<i<<endl;
}