#include <iostream>

using namespace std;

int main()
{

    int age = 19;

    // in order to create pointer variable, put * in front of it
    // conventionally, put a 'p' in front of the variable you are creating a pointer of
    // note that the data type of the pointer variable must match the original data type
    int *pAge = &age;

    double gpa = 4.2;
    double *pGpa = &gpa;
    
    string name = "sheep";
    string *pName = &name;
    
    // put the '&' symbol in front of a variable name to see the physical RAM address of the data
    // these addresses are called pointers
    
    cout << "Age:  " << &age << endl;
    cout << "GPA:  " << pGpa << endl;

    // you can dereference a pointer variable by printing the data stored at that memory address
    // to dereference, just put a '*' at the front of it
    cout << "Name: " << *pName << endl;


    return 0;
}