#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Seed for random number generation
    int secretNum = rand() % 101;  // Random number between 0 and 100
    int guess, i = 0;  // 'guess' for user input, 'i' for attempts

    printf("Welcome to the Number Guessing Game!\n");
    printf("You have 5 tries to guess the number between 0 and 100.\n");

    do {
        printf("Enter your Guess: ");
        if (scanf("%d", &guess) != 1) {  // Check for invalid input
            printf("Invalid input. Please enter a number between 0 and 100.\n");
            while (getchar() != '\n');  // Clear input buffer
            continue;  // Restart loop
        }
        
        i++;

        if (secretNum < guess) {
            printf("Too high!\n");
        } else if (secretNum > guess) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! Your guess is correct. The secret number is %d\n", secretNum);
            printf("You guessed it in %d tries.\n", i);
            break;  // Exit the loop when guessed correctly
        }

        // Losing condition
        if (i >= 5) {
            printf("You lose! Your try limit is over. The secret number was %d.\n", secretNum);
            break;  // Exit the loop if max tries are reached
        }
    } while (secretNum != guess);

    return 0;
}