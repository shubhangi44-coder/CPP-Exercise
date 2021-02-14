#include<iostream>
#include<conio.h>
using namespace std;

class Pattern
{
public:
    int line=7;
    int starcount=1;
    int mid=(line+1)/2;

    void fun(){
        for(int i=1; i<=line; i++){
            for(int j=1; j<=starcount; j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
            if (i<mid){
                starcount++;
            }
            else{
                starcount--;
            }
        }
    }  
};
int main()
{
    Pattern p;
    p.fun();
}