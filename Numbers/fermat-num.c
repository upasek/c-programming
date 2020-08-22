/*30. Write a program in C to display first 10 Fermat numbers.*/
/* 1 = 2 rest to power 2  rest  to power i */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i;
    double kir;
    printf("The first 10 Fermat numbers are:\n");
    printf("---------------------------------\n");
    for( i = 0; i <= 10; i++ ){
        kir = (pow(2, pow(2, i)));
        printf("%f \n",kir + 1);
    }
    return 0;
}
