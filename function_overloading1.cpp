/*WAP to print sum of numbers using function overloading and switch case*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int sum(int a, int b);
int sum(int a, int b, int c);
int sum(int a, int b, int c, int d);
int sum(int a, int b, int c, int d, int e);
int result1;
int result2;
int result3;
int result4;

int sum(int a, int b){
    return (a+b);
}
int sum(int a, int b, int c){
    return(a+b+c);
}
int sum(int a, int b, int c, int d){
    return (a+b+c+d);
}
int sum(int a, int b, int c, int d, int e){
    return (a+b+c+d+e);
}
int main(){
    /*cout<<sum(1,2)<<endl;
    cout<<sum(5,2,8)<<endl;
    cout<<sum(2,4,6,7)<<endl;
    cout<<sum(2,4,9,4,2)<<endl;*/

    int n, a[5];
    char ch='y';
    int count=0;
    int s;
    while(ch=='y'||ch=='Y'){
        cout<<"Enter the numbers"<<endl;
        cin>>n;
        cout<<"Press y to continue"<<endl;
        cin>>ch;
        a[count]=n;
        count++;
    }
    for(int i=0;i<=count-1;i++){
        cout<<"Entered Number is:"<<" "<<a[i]<<endl;
    }
    cout<<"The Count is:"<<" "<<count<<endl;
    switch(count){
        case 2:
        result1= sum(a[0],a[1]); 
        cout<<"The sum of numbers is:"<<" "<<result1<<endl; 
        break;

        case 3:
        result2=sum(a[0],a[1],a[2]);
        cout<<"The sum of numbers is:"<<" "<<result2<<endl;
        break;

        case 4:
        sum(a[0],a[1],a[2],a[3]);
        cout<<"The sum of numbers is:"<<" "<<result3<<endl;
        break;

        case 5:
        sum(a[0],a[1],a[2],a[3],a[4]);
        cout<<"The sum of numbers is:"<<" "<<result4<<endl;
        break;    
    }
    
    getch();
}

    