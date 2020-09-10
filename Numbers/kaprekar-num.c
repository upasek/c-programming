#include<stdio.h>
int main(){
    int num, b = 0;
    printf("Input a number: ");
    scanf("%d",&num);
    int a = num * num;
    while( a > 0){
        a = a / 10;
        b++;
    }
    int r = b;
    int c = num * num;
    int z = 1, p;
    int num2 = 0;
    while( b > r/2 ){
        p =  c % 10 ;
        num2 = num2 + (p*z);
        c = c / 10;
        z = z * 10;
        b--;
    }
    int sum = num2 + c;
    if (sum == num)
        printf("\n%d is a Kaprekar number.\n",num);
    else
        printf("\n%d is a not Kaprekar number.\n",num);

    return 0;
}
