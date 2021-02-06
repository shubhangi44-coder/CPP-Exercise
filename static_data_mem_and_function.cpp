//WAP to access static data member of class using static memeber function

#include<iostream>
#include<string.h>
using namespace std;

class Message{

    private:
    char str[30];
    static int count;                      //static data member

    public:
    Message(){
        count++;                        //constructor
    }

    void create(char s[]){
        strcpy(str,s);
    }

    void display(void){
        cout<<str<<endl;
    }

    static int totalobjects(){
        return count;
    }
};

int Message::count = 0;

int main(){
    Message m1;
    Message m2;
    Message m3;
    
    m1.create("Hello World");
    m2.create("This is static data member and static member function in cpp");
    m3.create("Lets learn together");

    m1.display();
    m2.display();
    m3.display();

    cout<<"Total objects created:"<<" "<<Message::totalobjects()<<endl;

    return 0;
}