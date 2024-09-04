#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int usr_input;
    int numberOfGuesses = 0;
    // seed the random number generator with the current time
    srand(time(NULL));

    // generate a random number between 1 and 100
    int randomNumberGenerated = (rand() % 100) + 1;

    do
    {   
        numberOfGuesses += 1;
        printf("Enter a number (1-100): ");
        scanf("%d", &usr_input);
        if (usr_input == randomNumberGenerated)
        {
            printf("You have guessed the correct number!\n");
            printf("The number of guesses you used: %d\n",numberOfGuesses);
        }
        else if (usr_input < randomNumberGenerated)
        {
            printf("Higher number please!\n");
        }
        else if (usr_input > randomNumberGenerated)
        {
            printf("Lower number please!\n");
        }
    } while (usr_input != randomNumberGenerated);
    
    
    return 0;
}