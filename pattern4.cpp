#include<iostream>
#include<conio.h>

using namespace std;

class Pattern{
    public:
    int line = 4;
    int count = 5;
    char a='A';
    
    void display(){
        for (int i = 1; i<=line; i++){
            for(int j = 1; j<=count; j++){
                cout<<a; 
            }
            cout<<endl;
            a++;
        }
    }
};
int main(){
    Pattern p;
    p.display();
}