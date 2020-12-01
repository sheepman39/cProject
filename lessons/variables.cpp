#include <iostream>

using namespace std;

int main()
{
    // intro to variables
    string characterName = "Tom";
    int characterAge = 35;

    /* 
    NOTES:
    has the ability to declare a variable and state value later
    int characterAge;
    characterAge = 35;
    string stores a string
    int stores an int
    */

    cout << "There was once a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    cout << "He liked the name " << characterName << endl;
    cout << "But he did not like being " << characterAge << endl;

    return 0;
}