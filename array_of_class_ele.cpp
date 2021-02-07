// WAP to multiply elements of an array by a number using class

#include<iostream>
using namespace std;
 
class Array
{
     public:
         int n;
         void getnum();
         void multiply();
};
 
void Array::getnum()
{
        int a[100];
        cout<<"Enter No. of elements u want : ";
        cin>>n;
        for(int i=0;i<n;i++)
    {
        cout<<"\nEnter element : ";
        cin>>a[i];
    }
 
}
 
void Array::multiply()
{
        int i,j,a[100],temp[100],k;
 
        cout<<"\nEnter the no. which u want to multiply e.g k : ";
        cin>>k;
 
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                temp[i]=(a[i]*k);
        }
        cout<<endl<<"After Multiply every element by k the new array is : "<<endl;
        for(int i=0;i<n;i++){

        cout<<"\n element : "<<temp[i]<<"\n";
        }
 
}
 
int main()
{
        Array mul;
 
        mul.getnum();
        mul.multiply();
 
        return 0;
}