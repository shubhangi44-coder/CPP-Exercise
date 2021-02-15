#include<iostream>
using namespace std;

int i;
int j;
int main(){
    for(i=1;i<=2; i++){
        char ch1='A';
        cout<<ch1;
        for (j=1; j<=1;j++){
            char ch2='b';
            cout<<ch2;
            ch2=ch2+1;
            cout<<ch2;
            ch1=ch1+3;
            cout<<ch1;
            ch2=ch2+2;
            cout<<ch2; 
            
            }
            cout<<endl;
            for(int k=1; k<=5; k++){
            cout<<k;
        }
        cout<<endl;
    }
return 0;
}
