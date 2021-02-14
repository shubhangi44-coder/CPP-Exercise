#include<iostream>
#include<conio.h>
using namespace std;

class Pattern
{
public:
    int line=6;
    int spacecount=5;
    int numcount=1;
    int num = 1;
    void fun(){
        for(int i=1; i<=line; i++){
            for(int j=1; j<=spacecount; j++){
                cout<<" "<<" ";
            }
            for(int k=1; k<=numcount; k++){
                    cout<<num<<" ";
                    num++;
            }
            cout<<endl;
            spacecount--;
            numcount=numcount+1;
            num=1;
        }
    }  
};
int main()
{
    Pattern p;
    p.fun();
}