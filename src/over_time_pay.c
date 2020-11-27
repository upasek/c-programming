#include<stdio.h>
void main (){
    int i, sum = 0, a;  
    for ( i = 1; i <= 10; i++ ){
        printf ("Enter the houre of %d employee :",i);
        scanf ("%d",&a);
        sum = sum + ( 12 * a );
    }
    printf ("Overtime pay of 10 employees is : %d",sum);
}
