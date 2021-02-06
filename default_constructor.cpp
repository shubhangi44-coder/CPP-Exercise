/*WAP using default constructor*/

#include <iostream>
#include<string.h>
using namespace std;

class Myclass{
    int a;
    public:
    Myclass(){
        cout<<"Enter Number";
        cin>>a;
    }
    void display(){
        cout<<a;
    }
};
int main(){    
    Myclass ob1, ob2, ob3;
    ob1.display();
    ob2.display();
    ob3.display();
    return 0;
}

   