#include<stdio.h>
int main(){
    int num, i;
    printf("The Kaprekar numbers less than 1000 are:\n");
    printf("------------------------------------------------\n");
    for(i = 1; i <= 1000; i++){
        int a = i * i;
        int b = 0;
        while( a > 0){
            a = a / 10;
            b++;
        }
        int r = b;
        int c = i * i;
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
        if (sum == i)
            printf("%d ",i);
    }
    printf("\n");

    return 0;
}

