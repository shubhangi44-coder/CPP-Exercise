/* 

 A 
 C C 
E E E 

*/

#include<iostream>
#include<conio.h>
using namespace std;

class Pattern{
    public:
    char ch='A';
    int spacecount=2;
    int charcount=1;
    void display(){
        for(int i=1; i<=3; i++){
            for(int j=1; j<=spacecount; j++){
                cout<<" ";  
            } 
            for(int k=1; k<=charcount; k++){
                cout<<ch<<" ";
                
            }  
            cout<<endl;
            spacecount--;
            charcount++;
            ch=ch+2;  
        }
    }
};
int main(){
    Pattern p;
    p.display();

    return 0;
}