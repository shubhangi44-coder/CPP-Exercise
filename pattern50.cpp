/*
  1
 22
333

*/

#include<iostream>
#include<conio.h>

using namespace std;

class Pattern{
    public:
    int spacecount = 3;
    int numcount=1;
    int num = 1;
    
    void display(){
        for (int i = 1; i<=3; i++){
            for(int j = 1; j<=spacecount; j++){
                cout<<" ";     
            }
            for(int k=1; k<=numcount; k++){
                cout<<num;
            }
            cout<<endl; 
            spacecount--;
            num++;
            numcount++;

        }
    }
};
int main(){
    Pattern p;
    p.display();
}