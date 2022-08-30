#include <stdio.h>

int main()

{
    int n, a[10], i, j, temp;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    for (i = 0 ; i < n ; i++)
    {
        temp = a[i];
        for (j = i - 1 ; j >= 0; j--)
            {
            if (a[j] > temp)
                a[j+1] = a[j];
            else
                break;
            }
            a[j+1] = temp;
            
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}