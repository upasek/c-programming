#include<stdio.h>
int main (){
    int num, q, b = 1, i = 1, a = 0, rev = 0, p;
    printf("Enter the Binary Number : ");
    scanf("%d",&num);
    while ( num > 0 ){
        q = num % 10;
        if ( i == 1)
            p = 1;
        else 
            p = 2;

        b = b * p;
        rev = rev + ( q * b);
        num = num / 10;
        i++;
    }
    printf("The equivalent Decimal Number : %d\n",rev);
    return 0;
}
