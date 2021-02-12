//read operation on file with endl using file handling program

#include<iostream>
#include<fstream>
using namespace std;
    int main()
    {
        char str[20000];
        fstream file_op("E:\\cpp workspace\\file2.txt",ios::in);
        while(!file_op.eof())
        {
            file_op.getline(str,20000);
            cout <<str;
            file_op.close();
        }
        cout <<endl;
    return 0;
    }