//WAP using template class

#include<iostream>
using namespace std;

template<class t>

class One{
    public:
    t a,b,c;
    void set(){
        cout<<"Enter the number"<<endl;
        cin>>a>>b;
    }
    void add(){
        c=a+b;
    }
    void display(char st[]){
        cout<<st<<" "<<c;
    }
};

int main(){

    One <int>ob;
    ob.set();
    ob.add();
    ob.display("Integer addition");

    One <float>ob2;
    ob2.set();
    ob2.add();
    ob2.display("float addition");

return 0;

}