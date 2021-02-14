#include<iostream>
#include<conio.h>
using namespace std;

class Pattern
{
public:
    int line=4;
    int spacecount=3;
    int starcount=1;
    void fun(){
        for(int i=1; i<=line; i++){
            for(int j=1; j<=spacecount; j++){
                cout<<" ";
            }
            for(int k=1; k<=starcount; k++){
                    cout<<"*";
            }
            cout<<endl;
            spacecount--;
            starcount=starcount+1;
        }
    }  
};
int main()
{
    Pattern p;
    p.fun();
}