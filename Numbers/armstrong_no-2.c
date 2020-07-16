/*The program for finding armstrong number*/
#include<stdio.h>
#include<math.h>
int main (){
    int i, num, sum = 0, p;
    printf("Input a number: ");
    scanf("%d",&num);
    int a = num;
    int b = num, n = 0;
    while( b > 0){
       b = b / 10;
       n++;
    }
    while(num > 0){
        p = num % 10;
        sum += pow(p, n);
        num = num / 10; 
    }
    if( sum == a && ( a < 2 || a > 9) )
        printf("\n%d is an Armstrong number.\n",a);
    else 
        printf("\n%d is not Armstrong number.\n",a);
    return 0;
}
