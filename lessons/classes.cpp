#include <iostream>

using namespace std;

// in order to make an object, you need to make a new class
// the template for a new object
class Book
{

public:
    string title;
    string author;
    int pages;
};

int main()
{

    // here is an object from the class Book
    Book book1;
    book1.title = "Hello There";
    book1.author = "General Kenobi";
    book1.pages = 50000;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    return 0;
}