

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
    int a[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);
    countingSort(a, n);
    printa(a, n);
}