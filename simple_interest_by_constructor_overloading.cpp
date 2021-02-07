// WAP to find simple interest using class with constructor overloading

#include<iostream>
#include<stdlib.h>
using namespace std;
 
class Interest
{
        long int principal;
        int time;
        float rate;
        float SI;
 
        public:
                Interest();                            
                Interest(long p, int t, float r);      
                Interest(long p, int t);               
                Interest(long p, float r);             
                void calculate(void);
                void display(void);
};
 
Interest::Interest()
{
        principal = time = rate = 0.0;
}
 
Interest::Interest(long p, int t, float r)
{
        principal = p;
        time = t;
        rate = r;
}
Interest::Interest(long p, int t)
{
        principal = p;
        time = t;
        rate = 0.08;
}
 
Interest::Interest(long p, float r)
{
        principal = p;
        time = 2;
        rate = r;
}
void Interest::display(void)
{
        cout<<"Principal Amount : Rs."<<principal<<"\n";
        cout<<"No. of Years : "<<time<<" years\n";
        cout<<"Rate of interest : "<<rate<<"\n";
        
}
void Interest::calculate(void)
{
        SI = (principal*time*rate)/100;
        cout<<"Simple interest is."<<SI<<endl<<endl;
}
 
int main()
{
        Interest s1;
        Interest s2(500000, 2, 0.07f);
        Interest s3(1200000, 6);
        Interest s4(6400000, 0.12f);
 
        
        s1.display();
        s1.calculate();
        
        s2.display();
        s2.calculate();
        
        s3.display();
        s3.calculate();
        
        s4.display();
        s4.calculate();
 
        return 0;
}
