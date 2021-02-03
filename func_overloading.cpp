#include<iostream>
#include<conio.h>

using namespace std;
int sum(int a, int b);
int sum(int a, int b, int c);
int sum(int a, int b, int c, int d);
int sum(int a, int b, int c, int d, int e);

int sum(int a, int b){
    return(a+b);
}
int sum(int a, int b, int c){
    return(a+b+c);
}
int sum(int a, int b, int c, int d){
    return (a+b+c+d);
}
int sum(int a, int b, int c, int d, int e){
    return (a+b+c+d+e);
}
int main(){
    cout<<sum(2,4)<<endl;
    cout<<sum(5,2,8)<<endl;
    cout<<sum(2,4,6,7)<<endl;
    cout<<sum(2,4,9,4,2)<<endl;
    return 0;

}

    