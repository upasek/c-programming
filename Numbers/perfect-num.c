#include<stdio.h>
void main(){
    int i, sum = 0, num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("\nThe positive divisor : ");
    for( i = 1; i < num; i++ ){
        if( num % i == 0){
            printf(" %d ",i);
            sum = sum + i;
        }
    } 
    printf("\n\nThe sum of the divisor is : %d\n",sum);
    if( sum == num )
        printf("\nThe number is perfect.\n");
    else 
        printf("\nSo, the number is not perfect.\n");
}
