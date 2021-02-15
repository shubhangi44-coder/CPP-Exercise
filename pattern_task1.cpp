/*

AbcDe
12345
AbcDe
12345

*/

#include<iostream>
using namespace std;

class Pattern{
    public:
    char ch1='A';
    char ch2='b';
    void dis(){
        for (int i=1; i<=2; i++){
            cout<<ch1;
            for(int j=1; j<=5; j++){
                if(j==2 || j==3){
                    cout<<ch2;
                    ch2++;
                }
                if(j==4){
                    ch1+=3;
                    cout<<ch1;
                }
                if(j==5){
                    ch2+=1;
                    cout<<ch2;
                }    
            }
            cout<<endl;
            for(int num=1; num<=5; num++){
                cout<<num;
            }   
            ch1='A';
            ch2='b';
            cout<<endl;
        }

    }
};

int main(){
    Pattern p;
    p.dis();
}