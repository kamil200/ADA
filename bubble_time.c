#include <stdio.h>
#include <sys/time.h>
int bubblesort(int [],int);        
int bubblesort1(int [],int);     
int bubblesort2(int [],int);       
int main()
{
        int a[100],i,n,t1,t2,t3,t4,t5,t6;
        printf("How many elements you want to sort: ");
        scanf("%d",&n);
        printf("Enter the %d elements: ",n);
        for(i=0;i<n;i++)
                {
                        scanf("%d",&a[i]);
                }
        struct timeval tt;
        struct timezone tz;
        gettimeofday(&tt,&tz);
        t1=tt.tv_usec;

        bubblesort(a,n);    

        gettimeofday(&tt,&tz);
        t2=tt.tv_usec;
        printf("Time taken by Classical bubblesort sort = %d \n",t2-t1);

        gettimeofday(&tt,&tz);
        t3=tt.tv_usec;

        bubblesort1(a,n); 
     
	  gettimeofday(&tt,&tz);
        t4=tt.tv_usec;
        printf("Time taken by Semi optimised bubblesort sort = %d \n", t4-t3);

        gettimeofday(&tt,&tz);
        t5=tt.tv_usec;
	
        bubblesort2(a,n);  

        gettimeofday(&tt,&tz);
        t6=tt.tv_usec;
        printf("Time taken by Optimised bubblesort sort = %d \n",t6-t5);
        return 1;
}
int bubblesort(int a[],int n)
{
        int j,k,temp;
        for(j=0;j<n-1;j++)
        {
                for(k=0;k<n-1;k++)
                {
                        if(a[k]>a[k+1])
                        {
                                //Swapping
                                temp=a[k];
                                a[k]=a[k+1];
                                a[k+1]=temp;
                        }
                }
        }
        printf("The Sorted elements are: ");
        for(j=0;j<n;j++)
        {
                printf(" %d ",a[j]);    
        }
        printf("\n");
        return 1;
}
int bubblesort1(int a[],int n)
{
        int j,k,temp;
        for(j=0;j<n-1;j++)
        {
                for(k=0;k<n-j-1;k++)    //Descreasing iteration in each pass
                {
                        if(a[k]>a[k+1])
                        {
                                temp=a[k];
                                a[k]=a[k+1];
                                a[k+1]=temp;
                        }
                }
        }
        printf("\nThe Sorted elements are: ");
        for(j=0;j<n;j++)
        {
                printf(" %d ",a[j]);    //Printing the sorted elements
        }
        printf("\n");
        return 1;
}  
int bubblesort2(int a[],int n)
{
        int j,k,temp;
        int flag=0;
        for(j=0;j<n-1;j++)
        {
                for(k=0;k<n-j-1;k++)
                {
                        if(a[k]>a[k+1])
                        {
                                temp=a[k];
                                a[k]=a[k+1];
                                a[k+1]=temp;
                                flag=1;        
                        }
                }
                if(flag==0)     
                break;
                flag=0;       
        }
        printf("\nThe Sorted elements are: ");
        for(j=0;j<n;j++)
        {
                printf(" %d ",a[j]);   
        }
        printf("\n");
        return 1;
}                                                                                                                 