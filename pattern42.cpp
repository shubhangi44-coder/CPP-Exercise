/*

*
*a
*a*
*a*a
*a*a*

*/

#include <iostream>
#include <conio.h>
using namespace std;

class Pattern
{
public:

    void display()
    {

        for (int i= 1; i <= 5; i++)
        {
            for ( int j=1; j<=i; j++)
            {
                if (j%2==0)
                {
                    cout<<"a";
                }
                else
                {
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }

};
int main()
{
    Pattern p;
    p.display();
}
