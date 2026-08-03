#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;
    int attempts = 0;
    srand(time(0));
    secret = rand() % 100 + 1;
    
    printf("===Number Guessing Game (1-100)===\n");
do {
    printf("Enter your guess: ");
    scanf("%d", &guess);
    attempts++;
    
        if (guess < secret) {
            printf("Too low! Try again: ");
        } else if (guess > secret) {
            printf("Too high! Try again: ");
        } else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }
        
    } while (guess != secret);
    return 0;
}