#include<iostream>
#include<conio.h>
using namespace std;

class Pattern
{
public:
    int line=6;
    int spacecount=5;
    int starcount=1;
    void fun(){
        for(int i=1; i<=line; i++){
            for(int j=1; j<=spacecount; j++){
                cout<<" "<<" ";
            }
            for(int k=1; k<=starcount; k++){
                    cout<<"*"<<" ";
            }
            cout<<endl;
            spacecount--;
            starcount=starcount+2;
        }
    }  
};
int main()
{
    Pattern p;
    p.fun();
}