#include <iostream>
#include <conio.h>
using namespace std;

class Pattern
{
public:
    void fun()
    {
        for (int i = 1; i <= 5; i++){

            for (int j = 1; j <= 5; j++){
                if (i==j || i+j==6){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<" ";
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