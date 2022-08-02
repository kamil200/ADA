#include <stdio.h>
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
void bubble_sort_semi(int a[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {   
        for (j = 0; j < n - i - 1; j++) { 
            if (a[j] > a[j + 1]) { 
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
void bubble_sort_full(int a[], int n) {
    int i = 0, j = 0, tmp;
    int flag=0;
    for (i = 0; i < n; i++) {   
        for (j = 0; j < n - i - 1; j++) { 
            if (a[j] > a[j + 1]) { 
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    
}


int main() {
    int a[100], n, i;
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n); 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("this is for normal bubblesort\n");    
    bubble_sort(a, n);
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    printf("this is for semi optimized bubblesort\n");    
    bubble_sort_semi(a, n);
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    printf("this is for fully optimized bubblesort\n");    
    bubble_sort_full(a, n);  
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}