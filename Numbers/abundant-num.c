/*write a program for finding the given number are abundant or not*/
#include<stdio.h>
int main(){
    int num, i, sum = 0;
    printf("Enter the input :");
    scanf("%d",&num);
    for( i = 1; i < num; i++ ){
        if(num % i == 0){
           sum = sum + i;
        }
    }
    if ( sum > num )
        printf("\nThe number is Abundant.\n");
    else 
        printf("\nThe number is not Abundant.\n");
    return 0;
}
