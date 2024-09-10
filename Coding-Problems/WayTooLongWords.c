#include <stdio.h>
#include <string.h>

int main()
{
    int n; // the number given at the start
    scanf("%d", &n);
    char words[n][101];

    // input all the words
    for (int i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }

    // comparison
    for (int i = 0; i < n; i++)
    {
        int length = strlen(words[i]);
        if (length > 10)
        {
            printf("%c%d%c\n", words[i][0], length - 2, words[i][length - 1]);
        }
        else
        {
            printf("%s\n", words[i]);
        }
    }

    return 0;
}