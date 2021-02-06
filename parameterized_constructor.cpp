#include <iostream>
#include<string.h>
using namespace std;

class Myclass{
    int a;
    public:
    Myclass(int a, int x, int y){
        cout<<a<<x<<y<<endl;
    }
    void display(){
        cout<<a;
    }
};
int main(){    
    Myclass ob1(3,2,5);
    ob1.display();
    
    return 0;
}

   