/*program for finding authomorphic number in between 1 to 20000*/
#include<stdio.h>
int main(){
    int num, i, p;
    printf("The Authomorphic numbers are: \n");
    printf("----------------------------------\n");
    for( i = 1; i <= 20000; i++ ){
        int z = i * i;
        int a = 1;
        int sum = 0;
        while( z > 0 ){
            p = z % 10;
            sum = sum + (p*a);
            if( sum == i ){
                printf("%d ",i);
                break;
            }
            z = z / 10;
            a = a * 10;
        }
    }
    printf("\n");
    return 0;
}

