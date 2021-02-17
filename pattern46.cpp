/* 

       1
     1 2 3
   1 2 3 4 5
 1 2 3 4 5 6 7

*/

#include<iostream>
#include<conio.h>
using namespace std;

class Pattern{
    public:
    int num=1;
    int spacecount=4;
    int numcount=1;
    void display(){
        for(int i=1; i<=4; i++){
            for(int j=1; j<=spacecount; j++){
                cout<<" ";  
            } 
            for(int k=1; k<=numcount; k++){
                cout<<num;
                num++;
                
            }  
            cout<<endl;
            spacecount--;
            numcount=numcount+2;
            num=1; 
        }
    }
};
int main(){
    Pattern p;
    p.display();

    return 0;
}