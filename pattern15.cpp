#include<iostream>
#include<conio.h>

using namespace std;

class Pattern{
    public:
    int line = 5;
    int count = 5;
    int num = 1;
    
    void display(){
        for (int i = 1; i<=line; i++){
            for(int j = 1; j<=count; j++){
                cout<<num<<" ";
                num++;     
            }
            cout<<endl; 
            num=1;
            count--;

        }
    }
};
int main(){
    Pattern p;
    p.display();
}