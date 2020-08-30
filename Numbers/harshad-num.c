/* Write a program in C to check if a number is Harshad Number or not.*/
// num = 18 , 1 + 8 = 9
//  if (18 % 9 == 0)
// so 18 is an harshad num.
#include<stdio.h>
int main(){
    int num, val;
    int sum = 0;
    int p;
    printf("Input a number: ");
    scanf("%d",&num);
    int z = num;
    while( z > 0){
        p = z % 10;
        sum = sum + p;
        z = z / 10;
    }
    val = num % sum;
    if( val == 0)
        printf("The given number is a Harshad Number.\n");
    else 
        printf("The given number is not a Harshad Number.\n");
    return 0;
}
