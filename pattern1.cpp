#include<iostream>
#include<conio.h>

using namespace std;

class Pattern{
    public:
    int line = 3;
    int count = 5;
    
    void display(){
        for (int i = 1; i<=line; i++){
            for(int j = 1; j<=count; j++){
                cout<<"*"; 
            }
            cout<<endl;

        }
    }
};
int main(){
    Pattern p;
    p.display();
}