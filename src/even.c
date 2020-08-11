/*Program for even value*/
#include <stdio.h>
int main() {
    int i = 1 ,a ;
    printf("Even value in between 1 to 1000 is : ");
    while (i <= 1000){
        a = i % 2 ;
        if ( a == 0)
            printf ("%d ",i);
        i++ ;
    }
    printf("\n");
    return 0;
}
