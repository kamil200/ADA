#include <stdio.h>
int prims(int);
int n;
int visited[20] = {0};
int cost[20][20];
int main()
{
    int s, i, j;
    printf("Enter The number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
            {
                cost[i][j] = 999;
            }
        }
    }
    printf("Choose the starting node: ");
    scanf("%d", &s);
    if (s < 0 || s >= n)
    {
        printf("Invalid Starting node\n");
    }
    else
        prims(s);
    return 0;
}
int prims(int s)
{
    int i, j, u, v, min, min_cost = 0, num_of_edges = 1;
    visited[s] = 1;
    while (num_of_edges < n)
    {
        for (i = 0, min = 999; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (cost[i][j] < min)
                {
                    if (visited[i] == 0)
                        continue;
                    else
                    {
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }
        if (visited[u] == 0 || visited[v] == 0)
        {
            printf("\n%d edge (%d,%d) = %d", num_of_edges++, u, v, min);
            min_cost += min;
            visited[v] = 1;
        }
        cost[u][v] = cost[v][u] = 999;
    }
    printf("\nCost of constructing MST is %d\n", min_cost);
}