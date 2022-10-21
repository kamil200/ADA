
#include <stdio.h>
#include <string.h>

void search(char *pat, char *txt)
{
    int A = strlen(pat); // m
    int B = strlen(txt); // n

    for (int i = 0; i <= B - A; i++)
    {
        int j;

        for (j = 0; j < A; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == A)
            printf("Pattern found at index %d \n", i);
    }
}

int main()
{
    char txt[20];
    char pat[20];
    printf("Enter the txt string:");
    scanf("%s", &txt);

    printf("Enter the pat string:");
    scanf("%s", &pat);

    search(pat, txt);
    return 0;
}
