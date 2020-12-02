#include <iostream>

using namespace std;

// function stubs allow you to call a function
// before it was created
void sayHi(string name, int age);

int main()
{
    // passing parameters
    sayHi("John",42);
    return 0;
}

// functions require a return type
// (int, void, ect.)
// void means that it will return no value
// parameters require a type then name

void sayHi(string name, int age){
    
    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old" << endl;

}