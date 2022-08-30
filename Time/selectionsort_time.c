

#include <stdio.h>
#include <sys/time.h>
void selection_sort(int[], int);

void selection_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}
int main()
{
    int a[100], n, i;
    clock_t start, end;
    double time = 0;
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    start = clock();
    selection_sort(a, n);
    end = clock();
    time = end - start;

    printf("this is time: %f \n", time);
    printf("Sorted Numbers\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}