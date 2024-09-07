#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int player, computer;
    // 0 --> snake
    // 1 --> water
    // 2 --> gun

    srand(time(0));

    int random_number = rand() % 3;

    computer = random_number;
    printf("Choose one of the following:\n0: Snake\n1: Water\n2: Gun\n");
    scanf("%d", &player);

    if (player < 0 || player > 2)
    {
        printf("Enter a valid option!\n");
        return 1;
    }
    

    if (player == computer)
    {
        printf("It's a draw!\n");
    }
    else if ((player == 0 && computer == 1) || // Snake vs Water
             (player == 1 && computer == 2) || // Water vs Gun
             (player == 2 && computer == 0))   // Gun vs Snake
    { 
        printf("The player has won the round!\n");
    }
    else {
        printf("The computer has won the round!\n");
    }

    return 0;
}