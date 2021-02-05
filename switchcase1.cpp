#include<iostream>
using namespace std;
int main(){
    char opr;
    float a, b;
    cout<<"Enter the operator(+, -, *, /)";
    cin>>opr;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;
    switch (opr){
        case '+':
        cout<<a<<"+"<<b<<"="<<a+b;
        break;

        case '-':
        cout<<a<<"-"<<b<<"="<<a-b;
        break;

        case '*':
        cout<<a<<"*"<<b<<"="<<a*b;
        break;

        case '/':
        cout<<a<<"/"<<b<<"="<<a/b;
        break;

        default:
        cout<<"Tyr Again";
        break;
    }
    return 0;

}