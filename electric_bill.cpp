#include <iostream>
using namespace std;

class E_Bill
{
private:
    int c_no;
    char c_name[20];
    int units;
    double bill;

public:
    void get()
    {
        cout << "Enter Customer No. : "<<endl;
        cin >> c_no;
        cout << "Enter Customer Name : "<<endl;
        cin >> c_name;
        cout << "Enter No. of Units used : "<<endl;
        cin >> units;
    }
    void calc_bill()
    {
        if (units <= 100){
            bill = units * 1.20;
        }      
        else if (units <= 300){
            bill = 100 * 1.20 + (units - 100) * 2;
        }     
        else{
            bill = 100 * 1.20 + 200 * 2 + (units - 300) * 3;
        }
    }

    void display()
    {
        cout << "Bill of Customer : " << bill;
    }
};

int main()
{
    E_Bill b1;
    b1.get();
    b1.calc_bill();
    b1.display();

    cout << "\n";

    return 0;
}
