

#include <stdio.h>

void countingSort(int a[], int size)
{
    int b[10];

    int max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    int c[10];

    for (int i = 0; i <= max; ++i)
    {
        c[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        c[a[i]]++;
    }

    for (int i = 1; i <= max; i++)
    {
        c[i] += c[i - 1];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        b[c[a[i]] - 1] = a[i];
        c[a[i]]--;
    }

    for (int i = 0; i < size; i++)
    {
        a[i] = b[i];
    }
}

void printa(int a[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}

int main()
{
    int list[50];
    int i, size;

    printf("Enter Total Number of Elements:");
    scanf("%d", &size);
    printf("Enter The Elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
    countingSort(list, size);
    printf("After Counting Sort:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d   ", list[i]);
    }

    return 0;
}