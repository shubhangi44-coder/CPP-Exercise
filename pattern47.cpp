/* 

    * 
   * * 
  * * * 
 * * * * 

*/

#include<iostream>
#include<conio.h>
using namespace std;

class Pattern{
    public:
    int num=1;
    int spacecount=4;
    int starcount=1;
    void display(){
        for(int i=1; i<=4; i++){
            for(int j=1; j<=spacecount; j++){
                cout<<" ";  
            } 
            for(int k=1; k<=starcount; k++){
                cout<<"*"<<" ";
                
            }  
            cout<<endl;
            spacecount--;
            starcount=starcount+1;
        }
    }
};
int main(){
    Pattern p;
    p.display();

    return 0;
}