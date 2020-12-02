#include<stdio.h>
void main(){
    int num, p, rev = 0;
    printf("Input a number: ");
    scanf("%d",&num);
    int a = num;
    while ( num > 0){
        p = num % 10;
        rev = rev * 10 + p;
        num = num / 10;
    } 
    if( rev == a)
        printf("%d is a palindrome number.\n",a);
    else
        printf("%d is a palindrome number.\n",a);
}
