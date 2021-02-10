#include<iostream>
#include<conio.h>

using namespace std;

class Pattern{
    public:
    int line = 4;
    int count = 5;
    char a='E';
    
    void display(){
        for (int i = 1; i<=line; i++){
            for(int j = 1; j<=count; j++){
                cout<<a;
                a--; 
            }
            cout<<endl;
            a='E';
        }
    }
};
int main(){
    Pattern p;
    p.display();
}