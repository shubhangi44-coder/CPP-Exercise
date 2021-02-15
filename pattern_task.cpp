/*

A b c D e
1 2 3 4 5 
A b c D e
1 2 3 4 5
 
*/


#include<iostream>
#include<conio.h>

using namespace std;

class Pattern{
    public:
    int row = 4;
    int col = 5;
    
    void display(){
        for (int i = 1; i<=row; i++){
            if(i==1||i==3){
                cout<<'A'<<' '<<'b'<<' '<<'c'<<' '<<'D'<<' '<<'e';

            }
            for(int j = 1; j<=col; j++){
                if(i==2||i==4){
                    cout<<j<<" ";
                }
            }
            cout<<endl;
        }
    }
};
int main(){
    Pattern p;
    p.display();
}