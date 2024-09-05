#include <stdio.h>

// function prototypes
void pattern(int n);

// function declarations
void pattern(int n) {

    for (int i = 0; i < n; i++)
    {
        // runs from 0 to n
        // if i == 1 --> 1 star
        // if i == 2 --> 3 stars
        // if i == 3 --> 5 stars
        // no_of_stars = (2i+1)
        
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// main program
int main(){

    int n = 5;
    pattern(n);

    return 0;
}