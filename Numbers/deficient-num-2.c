/*program for deficient number*/
#include<stdio.h>
int main(){
    int  i, j;
    printf("The Deficient numbers between 1 to 1000 are:\n");
    printf("------------------------------------------------\n");
    for( j = 1; j <= 1000; j++ ){
        int sum = 0;
        for( i = 1; i < j; i++ ){
            if( j % i == 0){
                sum = sum + i;
            }
        }
        if( sum < j )
            printf("%d ",j);
    }
    printf("\n");
    return 0;
}
