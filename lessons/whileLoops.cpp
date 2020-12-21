#include <iostream>

using namespace std;

int main()
{
    // while loops work exactly how you think it would
    // more or less, same syntax as java
    int index = 1;
    while(index <= 5){
        
        cout << index << endl;
        index++;
    
    }

    // there is also this thing called a do while loop
    // executes code, then checks condition
    // shoot first, ask questions later
    do{
        cout<< index << endl;
        index ++;
    }while (index <= 6);

    return 0;
}