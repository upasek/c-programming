#include<stdio.h>
void main() {
    int i, j, str, end;
    printf("Input the starting range or number : ");
    scanf("%d",&str);
    printf("\nInput the ending range of number : ");
    scanf("%d",&end);
    printf("\nThe Perfect numbers within the given range : ");
    for( i = str; i <= end; i++ ){
        int sum = 0;
        for( j = 1; j < i; j++ ){
            if( i % j == 0 ){
                sum = sum + j;
            }
        } 
        if( sum == i )
            printf(" %d ",i);
    }
    printf("\n");
}
