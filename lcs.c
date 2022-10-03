#include <stdio.h>
#include <string.h>
int a[30][30];
int main()
{
    char s1[30];
    char s2[30];
    char lcs[10];
    int n, m, i, j, k, temp1, temp2, pointer, count, result;
    printf("Enter String 1 : ");
    gets(s1);
    printf("Enter String 2 : ");
    gets(s2);
    n = strlen(s1);
    m = strlen(s2);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                a[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                a[i][j] = 1 + a[i - 1][j - 1];
            }
            else
            {
                temp1 = a[i - 1][j];
                temp2 = a[i][j - 1];
                if (temp1 >= temp2)
                {
                    a[i][j] = temp1;
                }
                else
                {
                    a[i][j] = temp2;
                }
            }
        }
    }
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    result = a[n][m];
    printf("The longest common subsequence length is: %d\n", result);
    count = a[n][m] - 1;
    i = n;
    j = m;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            lcs[count] = s1[i - 1];
            count--;
            i--;
            j--;
        }
        else if (a[i - 1][j] >= a[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    printf("lcs is: ");
    for (i = 0; i < result; i++)
    {
        printf(" %c ", lcs[i]);
    }
}