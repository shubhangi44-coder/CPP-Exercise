/* 

 EEEEE
   DDDD
     CCC
       BB
         A

*/

#include<iostream>
#include<conio.h>
using namespace std;

class Pattern{
    public:
    char ch = 'E';
    int charcount=5;
    int spacecount=1;
    void display(){
        for(int i=1; i<=5; i++){

             for(int k=1; k<=spacecount; k++){
                if(i>=2)
                    cout<<" ";
            }  
            for(int j=1; j<=charcount; j++){
                cout<<ch;  
            } 
           
            cout<<endl;
            spacecount=spacecount+2;
            charcount--;
            ch--;
        }
    }
};
int main(){
    Pattern p;
    p.display();

    return 0;
}