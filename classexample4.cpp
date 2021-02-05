/*WAP using class and object*/
#include<iostream>
#include<conio.h>
using namespace std;

class Hello
{
	public:
		void sayhello()
		{
			cout<<"Hello World"<<endl;
		}
};

int main()
{
	Hello h;
    h.sayhello();
    return 0;
}