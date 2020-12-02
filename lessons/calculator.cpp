#include <iostream>

using namespace std;

int main()
{
    // can declare multiple variables of the same data type at once
    // separate using commas
    double num1, num2;
    
    // asks user for two numbers and stores them
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << num1 + num2;

    return 0;
}