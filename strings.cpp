#include <iostream>

using namespace std;

int main()
{

    // .<name of function>();
    // string functions give properties of strings
    // .length() returns length of string
    string phrase = "Hello there";
    cout << phrase.length() << endl;
    
    // arrays start at 0 like always
    // used to get a specific character
    cout << phrase[3] << endl;
    
    // can edit characters of strings
    phrase[3] = 'p';
    cout << phrase[3] << endl;

    // .find(<string>,<starting index>)
    // returns the index where the string was located
    cout << phrase.find("there", 3) << endl;

    // .substr(<starting index>, <how many characters>)
    cout << phrase.substr(6, 3);


    // endl tells to start a new line.
    // remove it and the text stays on the same line
    // NOT necessary, but useful
    cout << "\nhello \nHey new line \n";
    cout << "Hello World " << endl;

    return 0;
}