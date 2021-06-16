//Write a C program to check whether a number is a Strong Number or not. 
#include<stdio.h>
void main(){
    int num, p, sum = 0;
    printf("Input a number to check whether it is Strong number: ");
    scanf("%d",&num);
    int d = num;
    while( num > 0){
        p = num % 10;
        int f = 1;
        while( p > 0){
            f = f * p; 
            p--;
        }
        sum = sum + f; 
        num = num / 10; 
    } 
    if( sum == d)
        printf("%d  is a Strong number.\n",d);
    else 
        printf("%d is not a Strong number.\n",d);
}
