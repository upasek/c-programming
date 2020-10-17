/*Write a program in C to generate mersenne within a range of numbers*/
#include<stdio.h>
#include<math.h>
#include<stdio.h>
//------main body of program---------
int main(){
    int i;
    printf("Mersenne numbers in between 0 to 1000 are:\n:");
    printf("------------------------------------------\n");
    for( i = 0; i <= 1000; i++ ){
        int a = 0;
        int kir = 0;
        while( kir != i ){
            kir = pow(2, a) - 1;
            if( kir == i  ){
                printf("%d ",i);
                break;
            }
            else if( kir > i )
                break;
            a++;
        }
    }
    printf("\n");
    return 0;
}           
