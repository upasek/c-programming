/*35. Write a program in C to print the first 20 numbers of the Pell series.*/
#include<stdio.h>
int main(){
    int i = 1;
    int a = 0;
    int b = 1;
    int p;
    printf("The first 20 numbers of Pell series are:\n");
    printf("-------------------------------------------\n");
    while( i <= 20 ){
        if( i == 1){
            printf("%d ",a);
        }
        else if( i == 2){
            printf("%d ",b);
        }
        else if( i > 2 && i <= 20 ){
            p = (b*2) + a;
            printf("%d ",p);
            a = b;
            b = p;
        }
        i++;
    }
    printf("\n");
    return 0;
}
