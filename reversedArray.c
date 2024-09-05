#include <stdio.h>

// prototypes
void printArray(int arr[], int lengthOfArray);
int reversed(int arr[], int lengthOfArray);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int lengthOfArray = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, lengthOfArray);
    reversed(arr, lengthOfArray);
    printArray(arr, lengthOfArray);
    return 0;
}

// this function prints an array
void printArray(int arr[], int lengthOfArray)
{
    for (int i = 0; i < lengthOfArray; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// this function reverses an array
int reversed(int arr[], int lengthOfArray)
{
    int temp;
    // swap 6 and 1
    // arr[i] <--> arr[lenghthOfArray - 1]
    // swap 5 and 2
    // arr[i + 1] <--> arr[lengthOfArray - 2]
    // swap 4 and 3
    // arr[i + 2] <--> arr[lengthOfArray - 3]
    for (int i = 0; i < lengthOfArray / 2; i++)
    {
        // swapping
        temp = arr[i];
        arr[i] = arr[lengthOfArray - i - 1];
        arr[lengthOfArray - i - 1] = temp;
    }
}