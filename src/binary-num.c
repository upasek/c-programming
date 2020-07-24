/*program for converting decimal number in binary number*/
#include<stdio.h>
int main(){
    int num, p, a = 1, rev = 0;
    printf("Input a number in decimal from : ");
    scanf("%d",&num);
    while ( num > 0 ){
        p = num % 2;
        rev = rev +( p * a );
        num = num / 2;
        a = a * 10;
    }
    printf("\nThe number in binary from is : %d\n",rev);
    return 0;
}
