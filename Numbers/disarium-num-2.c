/*16. Write a program in C to find Disarium numbers between 1 to 1000.*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int q, i;
    printf("The Disarium numbers are:\n");
    printf("-----------------------------\n");
    for( i = 1; i <= 1000; i++ ){
        int y = i;
        int z = i;
        int sum = 0;
        int p = 0;
        while( y > 0){
            p++;
            y = y / 10;
        }
        while(z > 0){
            q = z % 10;
            sum = sum + pow(q, p);
            z = z / 10;
            p--;
        }
        if(sum == i)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}

