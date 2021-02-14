/* WAP to print pattern
1
21
321
4321
54321*/

#include<iostream>
#include<conio.h>

using namespace std;

class Pattern{
    public:
    int n;
    
    void display(){
        cout << "Enter the number of rows : ";
        cin >> n;
        
        for (int i = 1; i<=n; i++){
            for(int j = i; j>=1; j--){
                cout << j;
            }
           cout << "\n";
        }
    }
};
int main(){
    Pattern p;
    p.display();
}







