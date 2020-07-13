#include<stdio.h>
void main(){
    int num, i, sum = 0;
    printf("Enter the input :");
    scanf("%d",&num);
    for( i = 1; i < num; i++ ){
        if(num % i == 0){
           sum = sum + i;
        }
    }
    if ( sum > num )
        printf("\nThe number is Abundan.\n");
    else 
        printf("\nThe number is not Abundant.\n");
}
