/*15. Write a program in C to check whether a number is Disarium or not.*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int num, p = 0, sum = 0, q;
    printf("Input a number: ");
    scanf("%d",&num);
    int y = num;
    int z = num;
    while( y > 0){
        p++;
        y = y / 10;
    }
    while(num > 0){
        q = num % 10;
        sum = sum + pow(q, p);
        num = num / 10;
        p--;
    }
    if(sum == z)
        printf("The given number is a Disarium Number.\n");
    else
        printf("The given number is not a Disarium Number.\n");
    return 0;
}
