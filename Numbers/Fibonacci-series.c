#include<stdio.h>
int main (){
    int i, num, temp, p = 0, q = 1;
    printf("Input number of terms to display : ");
    scanf("%d",&num);
    printf ("\nHere is the Fibonacci series upto to %d terms :",num);
    for( i = 1; i <= num; i++){
        if( i == 1)
            printf(" %d ",p);
        else if( i == 2)
            printf(" %d ",q);
        else{
            printf(" %d ",p+q);
            temp = q;
            q = p + q;
            p = temp;
        }
    }
    printf("\n");
    return 0;
}
