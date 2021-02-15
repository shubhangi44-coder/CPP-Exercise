/*

1 
a b 
1 2 3 
a b c d 
1 2 3 4 5 

*/

#include <iostream>
#include <conio.h>
using namespace std;

class Pattern
{
public:
    int num=1;
    char ch='a';

    void display()
    {

        for (int i= 1; i <= 5; i++){
            for ( int j=1; j<=i; j++){
                if (i%2!=0)
                {
                    cout<<num<<" ";
                    num++;
                }
                else
                {
                    cout<<ch<<" ";
                    ch++;
                }
            }
            cout<<endl;
            num=1;
            ch='a';
        }
    }
};
int main()
{
    Pattern p;
    p.display();
}
