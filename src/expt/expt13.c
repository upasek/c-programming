#include <stdio.h>
int main(){
    char cha1 = 'x', cha2 = 'X' ;
    printf("ascci value of x is %d ",cha1);
    printf("\nascci value of X is %d ",cha2);
    if ('X' < 'x')
        printf("\nascii value of X is less than x.\n");
    else 
        printf("\nascii value of X is greather than x.\n");

    return 0;
}      
