/*18. Write a program in C to find Harshad Number between 1 to 100.*/
#include<stdio.h>
int main(){
    int val;
    int p, i;
    printf("The Harshad Numbers are:\n");
    printf("--------------------------\n");
    for( i = 1; i <= 100; i++ ){
        int z = i;
        int sum = 0;
        while( z > 0){
            p = z % 10; 
            sum = sum + p;
            z = z / 10;
        }
        val = i % sum;
        if( val == 0)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}
