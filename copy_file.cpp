//WAP to copy the data from first file to the second file using file handling

#include<iostream>
#include<fstream>
using namespace std;
    int main()
    {
        char str[2000];
        fstream file_op1("E:\\cpp workspace\\file1.txt",ios::in);
        fstream file_op2("E:\\cpp workspace\\file2.txt",ios::out);

        while(!file_op1.eof()){
            file_op1.getline(str,2000);

            cout<<"first file data read and copy to the second file"<<endl<<str<<endl;
            file_op2<<str<<endl;  
        }
    return 0;
    }