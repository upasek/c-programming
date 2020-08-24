#include <stdio.h>
void main() {
    int i,a;
    for (i = 1; i <= 1000; i++){
        a = i % 2 ;
        if (a == 0)
            printf ("\nEven value is %d.",i);
    }
    printf("\n");
}
