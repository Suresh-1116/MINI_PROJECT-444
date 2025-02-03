
// Number Guessing Game
//This is a simple number guessing game where the user has to guess a randomly generated number within a given range.

//CODE:

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


/*INPUT & OUTPUT:
Welcome to the Number Guessing Game!
Guess the number between 1 and 100
Enter your guess: 69
Too high! Try again.
Enter your guess: 9
Too low! Try again.
Enter your guess: 50
Too high! Try again.
Enter your guess: 30
Too high! Try again.
Enter your guess: 20
Too high! Try again.
Enter your guess: 25
Too high! Try again.
Enter your guess: 15
Too high! Try again.
Enter your guess: 11
Too low! Try again.
Enter your guess: 10
Too low! Try again.
Enter your guess: 13
Too high! Try again.
Enter your guess: 12
Congratulations! You guessed the number in 11 attempts.


=== Code Execution Successful ===*/
