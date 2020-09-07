#include <stdio.h>
void main () {

    int  j = 10 , k = 12 ;
    if (k >= j){
        k = j ;
        j = k ;
    }
    printf("The value of k is %d\n",k);
    printf("The value of j is %d\n",j);
}
