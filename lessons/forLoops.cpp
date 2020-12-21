#include <iostream>

using namespace std;

int main()
{
    // for loops work exactly how you would expect
    // just like java, but declare the variable type
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    // here is an example with an array
    // note, use sizeof(<array>[0]) to get the length of an array
    // sizeof(<array>) wihtout the index will return the length of memory allocated
    // in a  for loop with an array, it must be at least equal to in order to run through the entire loop
    int nums[] = {99, 2, 4, 6, 7};
    for (int i = 0; i <= sizeof(nums[0]); i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}