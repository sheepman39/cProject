#include <iostream>

using namespace std;

int main()
{
    // declared variable that will be used to store information later
    int age;

    cout << "Enter your age: ";
    
    // asking for the user for information is just cin (opposite of cout)
    cin >> age;
    
    // returns age value provided
    cout << "Your age is " << age << endl;

    string name;
    cout << "Enter your name: " << endl;

    // cin is the default method of getting text
    // name is variable that string is stored in
    getline(cin, name);
    cout << "Hello " << name << endl;
    
    return 0;
}