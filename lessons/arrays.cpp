#include <iostream>

using namespace std;

int main()
{
    // arrays store multiple peices of information
    // to declare an array, declare the type of data you will be storing
    // and after the name, put []
    // to store data in that array use {}
    // the number in the [] tells how many indexes there should be
    // useful for incomplete data
    int luckyNums[20] = {4, 8, 15, 16, 23, 42};

    // to access any information, just put the index in []
    cout << luckyNums[0] << endl;

    // simple to modify the array
    luckyNums[11] = 3;
    cout << luckyNums[11] << endl;


    return 0;
}
