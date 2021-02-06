//WAP using friend function with class

#include<iostream>
#include<conio.h>
using namespace std;

class Sphere{
    private:
    int area;
    public:
    friend int display(Sphere);
};
int display(Sphere s){
    s.area=45;
    return s.area;
}
int main(){
    Sphere s;
    cout<<"Area of sphere is:"<<display(s)<<endl;
    return 0;
}
