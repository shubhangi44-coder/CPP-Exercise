// write operation on file with endl using file handling

#include<iostream>
#include<fstream>
using namespace std;
    int main()
    {
        fstream file_op("E:\\cpp workspace\\file3.txt",ios::out);

        file_op<<"Test Write to file ";
        file_op.close();
    return 0;
    }