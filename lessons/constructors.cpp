// using code from ./lessons/classes.cpp
#include <iostream>

using namespace std;

class Book
{

public:
    string title;
    string author;
    int pages;
    // a constructor function is called whenever a new object is being created
    // can take new arguments
    // a is not necessary
    Book(string aTitle, string aAuthor, int aPages)
    {
        // instead of declaring each property individually, do it all in the constructor
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }

    // you can make multiple constructors if an argument is missing
    Book(){
        title = "no title";
        author = "no author";
        pages = 0;
    }
};

int main()
{

    // here is an object from the class Book
    /*
    Book book1();
    book1.title = "Hello There";
    book1.author = "General Kenobi";
    book1.pages = 50000;
    */

    // see? Much simpler
    Book book1("Hello There", "General Kenobi", 50000);


    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    return 0;
}