#include<iostream>
#include<conio.h>
using namespace std;

class Pattern
{
public:
    int line=4;
    int starcount=7;
    int spacecount=1;

    void fun(){
        for(int i=1; i<=line; i++){
            for(int j=1; j<=starcount; j++){
                cout<<"*";
            }
            cout<<endl;
            for(int k=1;k<=spacecount;k++){
                    cout<<" ";
            }
        starcount=starcount-2;
        spacecount++;
        }
    }  
};
int main()
{
    Pattern p;
    p.fun();
}