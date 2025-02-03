
// Number Guessing Game
//This is a simple number guessing game where the user has to guess a randomly generated number within a given range.

//Code:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 0;
    srand(time(0));  // Seed the random number generator

    target = rand() % 100 + 1;  // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > target) {
            printf("Too high! Try again.\n");
        } else if (guess < target) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != target);

    return 0;
}
//Explanation:
//Random Number: The rand() function is used to generate a random number between 1 and 100.
//Game Loop: The user is prompted to keep guessing until they guess the correct number, and feedback is provided based on the guess.

