// WAP to compare two strings using class

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class String
{
    char str[20];

public:
    void getdata()
    {
        gets(str);
    }

    void compare(String s1, String s2)
    {
        if (strcmp(s1.str,s2.str)==0)
        {
        cout << "Strigs are Equal"<<endl;
        }
        else
        {
        cout << "Strings are Not Equal"<<endl;
        }

    }
};

int main()
{
    String s1, s2, s3;

    cout << "Enter first string : ";
    s1.getdata();
    cout << "Enter second string : ";
    s2.getdata();

    s3.compare(s1, s2);

    return 0;
}
