#include <iostream>

// in order to use special math functions, we must import this
#include <cmath>

using namespace std;

int main()
{

    int number1 = 5;
    double number2 = 5.5;

    // can do math equations in cout like this
    // remember pemdas and ()
    // can combine integers and doubles, but will return decimal
    // if integers only used, integer will be returned
    // add decimal point at the end for precise answers
    cout << number1 + number2 << endl;

    // adds one to a value
    number1++;

    // will add 9 to the value
    number1 += 9;

    // pow(<base>, <exponent>)
    // ex 2^5
    // finds the power of one number
    cout << pow(2, 5) << endl;

    // sqrt(<number>)
    // finds the square root
    cout << sqrt(36) << endl;

    // rounds to a whole number
    cout << round(4.3) << endl;

    // rounds to the nearest high whole number
    // does not follow normal rounding rules
    // will return 5
    cout << ceil(4.1) << endl;

    // rounds to the nearest low whole number
    // takes the lowest
    // returns 4
    cout << ceil(4.8) << endl;

    // returns the bigger of the numbers
    cout << fmax(3, 10) << endl;

    // returns the smaller of the numbers
    cout << fmin(3, 10) << endl;

    // modulous operator
    // finds the remainder of two numbers
    // 10/3 remainder = 1
    cout << 10 % 3 << endl;

    return 0;
}