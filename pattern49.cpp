/* 

 ABCDE
   BCDE
     CDE
       DE
         E

*/

#include<iostream>
#include<conio.h>
using namespace std;

class Pattern{
    public:
    char ch = 'A';
    int charcount=5;
    int spacecount=1;
    void display(){
        for(int i=1; i<=5; i++){

             for(int k=1; k<=spacecount; k++){
                    cout<<" ";
            }  
            for(int j=1; j<=charcount;j++){
                cout<<ch;
                ch++;     
            } 
            cout<<endl;
            spacecount=spacecount+2;
            charcount--;
            if(i==1){
                ch='A';
            }
            if(i==2){
                ch='B';
            }
            if(i==3){
                ch='C';
            }
            if(i==4){
                ch='D';
            }
            ch++;

            
            
            
        }
    }
};
int main(){
    Pattern p;
    p.display();

    return 0;
}