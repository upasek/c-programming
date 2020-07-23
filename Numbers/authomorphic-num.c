/*21. Write a program in C to check if a number is Authomorphic or not.*/
/*ex. 5 / 5 * 5 / 2|5|    number 25 is end wuth 5 */
#include<stdio.h>
int main(){
    int num, a = 1, q = 0;
    printf("Input a number: ");
    scanf("%d",&num);
    int z = num * num;
    int p;
    int sum = 0;
    while( z > 0 ){
        p = z % 10;
        sum = sum + (p*a); 
        if( sum == num ){
           printf("\nThe given number is an Automorphic Number.\n");
           q++;
           break;
        }
        z = z / 10;
        a = a * 10;   
    }
    if( q == 0)
        printf("\nThe given number is not an Automorphic Number.\n");
    return 0;
}
