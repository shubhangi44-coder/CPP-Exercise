/*WAP to find area and circumference of circle using class and function*/
#include<iostream>
#include<conio.h>
using namespace std;

class Circle{

   public:
    int r=4;
    int areaofcircle() {
        return 3.14*r*r;
    }

    int circumference() {
        return 2 * 3.14 * r;
    }
};

int main() {

    // create object of Room class
    Circle c1, c2;

    // assign values to data members
    c1.r=2; 
    c2.r; 

    cout << "Area of circle =  " << c1.areaofcircle() << endl;
    cout << "Circumference of circle =  " << c2.circumference() << endl;

    return 0;
}