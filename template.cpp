//WAP using template function

#include<iostream>
using namespace std;


template<class t, class n>
t fun(t x, n y){
    return (x+y);
}

int main(){

    cout<<fun(2.2, 4);

return 0;

}