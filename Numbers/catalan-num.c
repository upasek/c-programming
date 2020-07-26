/*program for first 10 catalan number*/
#include<stdio.h>
long int fact (int x){
    long long int sum = 1;
    int i;
    for( i = x; i >= 1; i-- ){
        sum = sum * i;
    }
    return sum;
}
int main(){
    printf("The first 10 catalan numbers are:\n");
    printf("------------------------------------------------\n");
    int q;
    long long int num1, num2, num3;
    int val1, val2;
    for( q = 0; q < 10; q++ ){
        if( q == 0 )
            printf("%d ",1);
        else if(q >= 1){
            num1 = fact(2*q);
            num2 = fact(q+1);
            num3 = fact(q);
            val1 = num1 / (num2 * num3);
            printf("%d ",val1);
        }
    }
    printf("\n");
    return 0;
}
