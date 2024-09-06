#include <stdio.h>

int positiveCount(int arr[], int lengthOfArray);

int main()
{
    int arr[] = {1, 4, 2, 5, -5, -7, -6, -3, -2,};
    int lengthOfArray = sizeof(arr) / sizeof(arr[0]);
    int positiveIntegerCount = positiveCount(arr, lengthOfArray);
    printf("number of positive integers: %d\n", positiveIntegerCount);
    return 0;
}

int positiveCount(int arr[], int lengthOfArray)
{
    int count;
    for (int i = 0; i < lengthOfArray; i++)
    {
        if (arr[i] >= 0)
        {
            count++;
        }
    }
    return count;
}