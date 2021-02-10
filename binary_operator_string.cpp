#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Binary{
    
    public:
    string name1,name2;
    void set(string x, string y){
        name1=x;
        name2=y;
    }
    void operator +(Binary cob2){
        string name3=name1+cob2.name1;
        string name4=name2+cob2.name2;
        cout<<name3<<endl<<name4;
    }
    void display(){
        cout<<name1<<endl<<name2;    
    }

};
int main(){
    Binary ob1,ob2;
    ob1.set("Shubh","minu");
    ob2.set("mohije","waghmare");
    ob1+ob2;
    return 0;
}