#include <stdio.h>
void main() {
    
    int a[20], i, j, p, min;
    
    for (i = 0; i < 5; i++) {
        printf("Enter the element :");
        scanf("%d",&a[i]);
    }

    for (i = 0; i < 5-1; i++) {
        int min = a[i];  
        for (j=i+1;j<5;j++) {
            if (min > a[j]) {
                min = a[j];
            }
        }

        p = a[i];
        a[i] = min;
        a[j] = p;
    }

    for (i=0;i<5;i++) {
        printf ("%d", a[i]);
    }
}       
