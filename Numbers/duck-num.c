/*Write a program in C to check whether a number is a Duck Number or not.*/
/* 32001 is a duck number */
/* 012 is not a duck number */
#include<stdio.h>
int main(){
    int num, p;
    printf("Input a number : ");
    scanf("%d",&num);
    
    int z = num;
    int q = 0;               // here (num = t = z)
    while(z > 0){           // To find the length of number ( q )
        z = z / 10;
        q++;
    }

    int t = num;
    int y = 0;
    while( q > 1){
        p = num % 10;
        if( p == 0){
            printf("The given number is a Duck Number.\n");
            y++;
            break;
        }
        num = num / 10;
        q--;
    }
    
    if(y == 0)
        printf("The given number is not a Duck Number.\n");
    return 0;
}
