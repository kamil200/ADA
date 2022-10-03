#include <stdio.h>

int findmaxDAC(int[], int, int);
int main()
{
    int a[10], n, i, result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    result = findmaxDAC(a, 0, n - 1);
    printf("The max Number is = %d", result);
}

int findmaxDAC(int a[], int beg, int end)
{
    int mid, max1, max2;
    if (beg == end)
        return a[beg];
    else if (beg == end - 1)
    {
        if (a[beg] >= a[end])
            return a[beg];
        else
            return a[end];
    }
    else
    {
        mid = (beg + end) / 2;
        max1 = findmaxDAC(a, beg, mid);
        max2 = findmaxDAC(a, mid + 1, end);
        if (max1 >= max2)
            return max1;
        else
            return max2;
    }
}
