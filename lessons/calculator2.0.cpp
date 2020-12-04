#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "\nEnter the operator (+,-,*,/): ";
    cin >> op;
    
    cout << "\nEnter second number: ";
    cin >> num2;



    if(op == '+'){
        result = num1 + num2;
    } else if(op == '-'){
        result = num1 - num2;
    } else if(op == '/'){
        result = num1 / num2;
    } else if(op == '*'){
        result = num1 * num2;
    } else {
        cout << "Please use +, -, *, /" << endl;
        return 0;

    }
    
    cout << num1 << op << num2 << "=" << result << endl;

    return 0;
}