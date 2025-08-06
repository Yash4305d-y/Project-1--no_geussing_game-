#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    // // Print the random number
    // printf("Rae "ndom number between 1 and 100: %d\n", randomNumber);
    // printf("Guess the number");

    do
    {
        printf("Guess the number:- ");
        scanf("%d", &guessed);  
        if (guessed > randomNumber)
        {
            printf("Lower number please\n ");
        }
        if (guessed< randomNumber)
        {
            printf("Higher number please \n");
        
        }
        
        no_of_guesses++;
    } while (guessed != randomNumber);

    printf("YOU GUESSED THE NUMBER IN %d GUESSSES", no_of_guesses);
    return 0;
}
