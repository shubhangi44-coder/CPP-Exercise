//read operation on file using file handling program

#include<iostream>
#include<fstream>
using namespace std;
    int main()
    {
        char str[2000];
        fstream file_op("E:\\cpp workspace\\file1.cpp",ios::in);
        while(file_op >> str){
            cout<< str;
        }
    return 0;
    }