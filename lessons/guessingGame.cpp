#include <iostream>

using namespace std;

int main()
{

    // personally, i find the way the tutorial said to make this program inefficient
    // I may work on this later to make it more efficient and to add a random number generator
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    do
    {

        if (guessCount < guessLimit)
        {

            cout << "Enter your guess: ";
            cin >> guess;
            guessCount++;
        }
        else
        {

            outOfGuesses = true;
        }

    } while (secretNum != guess && !outOfGuesses);

    if (outOfGuesses)
    {
        cout << "You lose! The number was: " << secretNum << endl;
    }
    else
    {
        cout << "You guessed correctly!" << endl;
    }
    return 0;
}