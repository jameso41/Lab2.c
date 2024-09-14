#include <stdio.h>
#include <stdlib.h>

int main() {
    int RandomNumber; // Variable to store the random number that is generated
    int guess;        // variable to store the user's guess
    int attempts = 3;  // The number of attemps the user has to guess the number

    // generate a numnber between 1 and 10
    RandomNumber = rand() % 10 +1;

    // Give the user instructions on how the game will operate
    printf("Guess the number between 1 and 10. You have %d attempts.\n", attempts);

    // start the loop for attempts
    for(int i = 0; i < attempts; i++) {
        printf("Attempt %d Enter your guess: ", i + 1);
        scanf("%d", &guess); // Read the user's guess

        // Check if the guess is between 1 and 10
        if( guess <1 || guess > 10) {
            printf("Please enter a number between 1 and 10.\n");
        }
        // check to see if the number is correct
        else if(guess == RandomNumber) {
            printf("Congratulations! You've guessed the number correctly!\n");
                
            return 0;
        }
        // If the guess is incorrect
        else{
            printf("Wrong guess.");
            // Tell the user how many guesses they have left
            if(i < attempts -1){

                printf("Try again.\n");
            } else {
                    printf("You've used all of your attempts. The number was %d.\n", RandomNumber);
            }
            
        }
        
    }

    return 0; // Exit program
}