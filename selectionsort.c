#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("enter the number of elements you want");
        scanf("%d",&n);
    printf("Enter %d integers\n", n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n-1;i++)
    {
        int min=i;
        for (j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
            
        }
        if(min!=i)
            {
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;

            }
    }
    printf("your sorted array is:");
    for(i=0;i<n;i++)
        printf("\t%d",a[i]);
    return 0;
}