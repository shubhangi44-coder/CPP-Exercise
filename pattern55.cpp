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
    char ch = 'A';
    int charcount=1;
    int spacecount=3;
    void display(){
        for(int i=1; i<=4; i++){

             for(int k=1; k<=spacecount; k++){
                    cout<<" ";
            }  
            for(int j=1; j<=charcount;j++){
                cout<<ch; 
                ch++;
   
            } 
            cout<<endl;
            spacecount--;
            ch++;
            charcount=charcount+2; 
            ch='A';  
        }
    }
};
int main(){
    Pattern p;
    p.display();

    return 0;
}