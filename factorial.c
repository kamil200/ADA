#include <stdio.h>
#include <sys/time.h>
int fact_iterative(int);
int fact_recursive(int);
int main()
{
    int n, result, t1, t2, t3, t4;
    printf("Enter the number: ");
    scanf("%d", &n);
    struct timeval tt;
    struct timezone tz;
    gettimeofday(&tt, &tz);
    t1 = tt.tv_usec;

    fact_iterative(n);

    gettimeofday(&tt, &tz);
    t2 = tt.tv_usec;
    printf("Iterative time:%d\n\n", t2 - t1);

    gettimeofday(&tt, &tz);
    t3 = tt.tv_usec;

    result = fact_recursive(n);

    printf("Factorial of %d using recursion is : %d\n", n, result);
    gettimeofday(&tt, &tz);
    t4 = tt.tv_usec;
    printf("Recursive time:%d\n", t4 - t3);
}

int fact_iterative(int n)
{
    int f = 1, i;
    if (n == 0)
    {
        printf("Factorial of %d is : %d\n", n, f);
        return 1;
    }
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("Factorial of %d using iteration is : %d\n", n, f);
}
int fact_recursive(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact_recursive(n - 1);
}
