/* 

 12345
   1234
     123
       12
         1

*/

#include<iostream>
#include<conio.h>
using namespace std;

class Pattern{
    public:
    int num = 1;
    int numcount=5;
    int spacecount=1;
    void display(){
        for(int i=1; i<=5; i++){

             for(int k=1; k<=spacecount; k++){
                    cout<<" ";
            }  
            for(int j=1; j<=numcount;j++){
                cout<<num; 
                num++;    
            } 
            cout<<endl;
            spacecount=spacecount+2;
            numcount--;
            num--;
            num=1;
        }
    }
};
int main(){
    Pattern p;
    p.display();

    return 0;
}