#include<stdio.h>
void main(){
    int num, x = 0;
    printf("Enter the input :");
    scanf("%d",&num);
    if(num <= 0)
        printf("input positive number\n");

    while(num != 1){
        if(num % 5 == 0){
            num = num / 5;
        }
        else if( num % 3 == 0){
            num = num / 3;
        }
        else if( num % 2 == 0){
            num = num / 2;
        }
        else {
            printf("\nThe number is not ugly number. \n");
            x++;
            break;
        }
    }
    if( x == 0)
        printf("\nIt is an ugly number .\n");
}
