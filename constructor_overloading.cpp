//WAP to print sum of number using constructor overloading

#include <iostream>
#include <conio.h>
using namespace std;

class Add
{
    int a;
    int b;

public:
    Add()
    {
        a = 0;
        b = 0;
    }

    Add(int x)
    {
        a = x;
        b = 0;
    }

    Add(int x, int y)
    {
        a = x;
        b = y;
    }

    int sum()
    {
        int s = a + b;
        cout << "The sum of number is: " << s << endl;
        return 0;
    }
};

int main()
{
    Add a1;
    a1.sum();

    Add a2(4);
    a2.sum();

    Add a3(2, 4);
    a3.sum();

    return 0;
}