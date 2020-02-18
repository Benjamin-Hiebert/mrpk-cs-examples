#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <stdio.h> 
#include <cctype>
using namespace std;

int main() {

    srand (time(NULL));
    // generate random num between 1 and 10
    int secretNum = rand() % 10 + 1;
    int playerGuess = 11; // init to impossible number
    bool playAgain = true;
    char goAgain; 

    while (playAgain)
    {
        while (playerGuess != secretNum)
        {
            cout << "Guess our secret number between 0 and 10" << endl;
            cin >> playerGuess;
            
            // We will cover if statements later but

            if (playerGuess > secretNum)
            {
                cout << "The secret number is lower!";
            } else (playerGuess < secretNum) {
                cout << "The secret number is higher"
            }
        }

        cout << "Type the letter Y to continue";
        cin >> goAgain;
        goAgain = tolower(goAgain);
        if (goAgain != 'y') {
            !playAgain;
        }
    }
}