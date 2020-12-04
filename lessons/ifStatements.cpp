#include <iostream>

using namespace std;

// to compare if statements, use
// <, <=, >, >=, ==, !=
int getMax(int num1,int num2, int num3){
    if(num1 >= num2 && num1 >= num3){
        return num1;
    }else if(num2 >= num3){
        return num2;
    }else {
        return num3;
    }
}
int main()
{

    bool isMale = true;
    bool isTall = false;

    // && for and
    // || for or
    // ! opposite
    if(isMale && isTall){
        cout << "You are a tall male" << endl;
    } else if(isMale && !isTall){
        cout << "You are a short male" << endl;
    } else if(!isMale && isTall){
        cout << "You are tall" << endl;
    } else {
        cout << "You are not a male, but are short" << endl;
    }

    cout << "\n\n\n";
    cout << getMax(2,0,7) << endl;
 
    return 0;
}
