// WAP to find greatest number using class with if else

#include <iostream>
using namespace std;
class greatest
{
private:
    int x, y;

public:
    void input()
    {
        cout << "Enter the numbers: ";
        cin >> x >> y;
    }
    void find()
    {

        if (x > y)
        {
            cout << "Greatest no is: " << x;
        }else{
                cout << "Greatest no is: " << y;
            }
        
    }
};
int main()
{
    greatest g;
    g.input();
    g.find();
}