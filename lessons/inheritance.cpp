#include <iostream>

using namespace std;

class Chef{
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

// we want the ItalianChef to do everything a Chef can do plus more
// this concept is called inheritance
// first part here is the new class
// to inherit from another class, ': public <class name>'
class ItalianChef : public Chef{

    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        
        // you can override previous functions to have different results
        void makeSpecialDish(){
            cout << "The chef makes chicken parm" << endl;
        }
        
};

int main()
{

    // italian chef can do everything a chef can do
    // a chef can not call makePasta
    Chef chef;
    chef.makeChicken();

    ItalianChef italianchef;
    italianchef.makePasta();

    // these will return different results
    chef.makeSpecialDish();
    italianchef.makeSpecialDish();

    return 0;
}