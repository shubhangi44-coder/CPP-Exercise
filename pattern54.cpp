/* 

   1
  333
 55555
7777777

*/

#include<iostream>
#include<conio.h>
using namespace std;

class Pattern{
    public:
    int num = 1;
    int numcount=1;
    int spacecount=3;
    void display(){
        for(int i=1; i<=4; i++){

             for(int k=1; k<=spacecount; k++){
                    cout<<" ";
            }  
            for(int j=1; j<=numcount;j++){
                cout<<num; 
   
            } 
            cout<<endl;
            spacecount--;
            num=num+2;
            numcount=numcount+2;   
        }
    }
};
int main(){
    Pattern p;
    p.display();

    return 0;
}