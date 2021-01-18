#include <iostream>

using namespace std;

// this is just a demonstration on something you can do with for loops
int power(int base, int power)
{

    int result = 1;

    for (int i = 0; i <= power; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int baseNum;
    int powerNum;

    cout << "Please put in your base num: ";
    cin >> baseNum;
    
    cout << "Please put in the power: ";
    cin >> powerNum;
    
    cout << power(baseNum,powerNum) << endl;

    return 0;
}