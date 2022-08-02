#include <stdio.h>
#include <time.h>

void bubble_sort(int a[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {   
        for (j = 0; j < n - 1; j++) { 
            if (a[j] > a[j + 1]) { 
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main(){
    int a[100], n, i;
    clock_t start,end;
    double time=0;
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n); 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    start=clock();
    bubble_sort(a, n);
    end=clock();
    time=end-start;

    printf("this is time: %f \n",time);
    printf("Sorted Numbers\n");    
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}