

#include <stdio.h>
#include <sys/time.h>
void insertion_sort(int[], int);

void insertion_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > temp)
                a[j + 1] = a[j];
            else
                break;
        }
        a[j + 1] = temp;
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
    insertion_sort(a, n);
    end = clock();
    time = end - start;

    printf("this is time: %f \n", time);
    printf("Sorted Numbers\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}