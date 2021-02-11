#include <iostream>
using namespace std;

float radius;
class Circle
{

public:
    void get()
    {
        cout << "enter radius : ";
        cin >> radius;
    }

    // pure virtual function
    virtual float find() = 0;
};

class Area : public Circle
{
public:
    float find()
    {
        return 3.14 * radius * radius;
    }
};

class Circum : public Circle
{
public:
    float find()
    {
        return 2 * 3.14 * radius;
    }
};

int main()
{
    Area a;
    Circum c;

    a.get();
    cout << "Area of circle: " << a.find() << endl;

    c.get();
    cout << "Circumference of circle: " << c.find() << endl;

    return 0;
}
