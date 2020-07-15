/*The program in C to check two numbers are Amicable numbers or not. */
/*sum of divisor of 1st num is equal to 2nd num and vice versa */
#include<stdio.h>
int main(){
    int num1, num2, sum1 = 0, sum2 = 0;
    printf("Input the 1st number : ");
    scanf("%d",&num1);
    printf("Input the 2nd number : ");
    scanf("%d",&num2);
    int i;
    // find sum of divisor of 1st num.
    for( i = 1; i <= num1/2; i++ ){
        if( num1 % i == 0){
            sum1 = sum1 + i; 
        }
    }
    // find sum of divisor of 2nd num.
    for( i = 1; i <= num2/2; i++ ){
        if( num2 % i == 0){
            sum2 = sum2 + i;
        }
    }
    if( sum1 == num2 && sum2 == num1){
        printf("\nThe given numbers are an Amicable pair.\n");
    }
    else
        printf("\nThe given numbers are not an Amicable pair.\n");
    return 0;
}
