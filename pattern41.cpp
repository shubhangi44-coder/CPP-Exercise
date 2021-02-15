/*
*
**
* *
*  *
*****

*/

#include <iostream>
#include <conio.h>
using namespace std;

class Pattern
{
public:
    int lines = 5;
    int starcount = 1;

    void display()
    {

        for (int i= 1; i <= lines; i++)
        {
            for ( int j=1; j <= i; j++)
            {
                if (j == 1 || j == i || i == lines)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
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
