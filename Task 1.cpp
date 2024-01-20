// WAP of Number Guessing Game in C++
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Declare variables
    int secret, guess, tries = 0;
    // Initialize random seed
    srand(time(0));
    // Generate a random number between 1 and 100
    secret = rand() % 100 + 1;
    // Display the game instructions
    cout << "Welcome to the number guessing game!\n";
    cout << "You have to guess a number between 1 and 100.\n";
    cout << "You have 10 tries to guess the correct number.\n";
    // Start the game loop
    do
    {
        // Prompt the user to enter a guess
        cout << "Enter your guess: ";
        cin >> guess;
        // Increment the number of tries
        tries++;
        // Check if the guess is correct
        if (guess == secret)
        {
            // Congratulate the user and end the game
            cout << "You guessed it!\n";
            cout << "You won the game in " << tries << " tries.\n";
            break;
        }
        // Check if the guess is too high or too low
        else if (guess > secret)
        {
            // Tell the user to guess lower
            cout << "Too high!\n";
        }
        else if (guess < secret)
        {
            // Tell the user to guess higher
            cout << "Too low!\n";
        }
        // Check if the user has run out of tries
        if (tries == 10)
        {
            // Tell the user they lost the game and reveal the secret number
            cout << "You ran out of tries.\n";
            cout << "You lost the game.\n";
            cout << "The secret number was " << secret << ".\n";
        }
    } while (tries < 10); // Repeat the loop until the user guesses correctly or runs out of tries
    return 0;
}
