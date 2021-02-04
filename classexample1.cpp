/*WAP using const keyword*/
#include<iostream>
#include<conio.h>
using namespace std;

class Val
{
	public:
		int x;
		Val()
		{
			x = 0;
		}
};

int main()
{
	const Val a;      // declaring const object 'a' of class 'val'
	a.x = 10;       // compilation error
	return 0;
}