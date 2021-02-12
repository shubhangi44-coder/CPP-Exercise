#include <iostream>
#include <conio.h>
using namespace std;

class Pattern
{
public:
    void fun()
    {
        for (int i = 1; i <= 4; i++){

            for (int j = 1; j <= 7; j++){
                if (i==4 || j==4){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<"o"<<" ";
                }   
            }
           cout <<"\n"; 
        }  
    }
};
int main()
{
    Pattern p;
    p.fun();
}