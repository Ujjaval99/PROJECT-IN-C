#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));

    int random_number = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed;

    printf("GUESS THE NUMBER (1-100)\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guessed);
        no_of_guesses++;

        if (guessed > random_number) {
            printf("LOWER NUMBER PLEASE\n");
        } else if (guessed < random_number) {
            printf("HIGHER NUMBER PLEASE\n");
        } else {
            printf("You guessed the number in %d guesses!\n", no_of_guesses);
        }
    } while (guessed != random_number);

    return 0; 
}