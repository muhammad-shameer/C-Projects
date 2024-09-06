#include <stdio.h>

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3); // let the user decide the multiplicands

    int multiplicationTables[3][10]; // declaration of the 2D Array
    int multiplicands[] = {num1, num2, num3}; // their tables are to be stored in the 2D Array above

    for (int i = 0; i < 3; i++) // columns for multiplicands
    {
        for (int j = 0; j < 10; j++) // rows for the tables
        {
            multiplicationTables[i][j] = multiplicands[i] * (j + 1);
        }
    }
    // printing the tables
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n", multiplicands[i], j + 1, multiplicationTables[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}