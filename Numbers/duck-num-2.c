/*Write a program in C to check whether a number is a Duck Number or not.*/
/* 32001 is a duck number */
/* 012 is not a duck number */
#include<stdio.h>
int main(){
    int p, i;
    printf("The Duck numbers are : \n");
    printf("------------------------\n");
    for( i = 1; i <= 500; i++ ){
        int z = i;
        int q = 0;               // here (num = t = z)
        while(z > 0){           // To find the length of number ( q )
            z = z / 10;
            q++;
        }   
        int t = i;
        while( q > 1){
            p = t % 10;
            if( p == 0){
                printf("%d ",i);
                break;
            }   
            t = t / 10;
            q--;
        }   
    }
    return 0;
}    
