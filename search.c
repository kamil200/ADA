#include <stdio.h>
#include <sys/time.h>
int lsearch(int[], int);
int bsearch(int[], int, int, int);
int n;
int main()
{
    int a[50], i, s, beg, end, t1, t2, t3, t4;
    printf("Enter the number of elements in Array: ");
    scanf("%d", &n);
    printf("Enter the values:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    beg = 0;
    end = n - 1;
    printf("Enter the element to search: ");
    scanf("%d", &s);
    struct timeval tt;
    struct timezone tz;
    gettimeofday(&tt, &tz);
    t1 = tt.tv_usec;

    lsearch(a, s);

    gettimeofday(&tt, &tz);
    t2 = tt.tv_usec;
    printf("Time taken by Linear search is: %d\n", t2 - t1);

    gettimeofday(&tt, &tz);
    t3 = tt.tv_usec;

    bsearch(a, s, beg, end);

    gettimeofday(&tt, &tz);
    t4 = tt.tv_usec;
    printf("Time taken by Binary search is: %d\n", t4 - t3);
}
int lsearch(int a[], int s)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (s == a[i])
        {
            printf("\nUsing Linear Search\n");
            printf("The element %d was found at index %d\n", s, i);
            break;
        }
    }
    if (i == n)
        printf("The element %d is not present in the array", s);
    return 0;
}
int bsearch(int a[], int s, int beg, int end)
{
    int mid;
    mid = (beg + end) / 2;
    if (s == a[mid])
    {
        printf("\nUsing Binary Search\n");
        printf("The element %d was found at index %d\n", s, mid);
    }
    else if (s < a[mid])
    {
        bsearch(a, s, beg, mid);
    }
    else if (s > a[mid])
    {
        bsearch(a, s, mid + 1, end);
    }
    else
    {
        printf("The element %d is not present in the array", s);
    }
    return 0;
}
