#include <iostream>

using namespace std;

int main()
{
    // how to create and use a 2d array
    // pretty much it has arrays within an array

    // first number is how many arrays you are making
    // second is how many indexs in each array you are placing
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    // the two numbers represent which array and which index
    // finds the array at index 1 and takes the 2nd index
    cout << numberGrid[1][1] << endl;

    // nested for loops work like you would expect
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << numberGrid[i][j] << endl;
        }
    }
    return 0;
}