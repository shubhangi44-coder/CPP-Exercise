#include<iostream>
#include<conio.h>

using namespace std;

class Pattern{
    public:
    int line = 3;
    int count = 4;
    char A ='A';
    char a ='a';
    
    void display(){
        for (int i = 1; i<=line; i++){
            cout<<A<<" ";
            for(int j = 1; j<=count-1; j++){
                
                cout<<a<<" ";
            }

            A++;
            a++;
            cout<<endl;
        }
    }
};
int main(){
    Pattern p;
    p.display();
}