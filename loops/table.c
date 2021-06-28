#include  <stdio.h>
void main(){
    int num ,a,i,j ;
    printf ("\nenter a number:");
    scanf ("%d",&num);
    printf("\n");
    for (i=1;i<=num;i++){
        for( j = 1; j <= 10; j++){
            printf(" %d x %d = %d,\t",i,j,i*j);
        }
        printf("\n");
    }
}
