/*32. Write a program in C to Check if a number is Mersenne number or not.*/
#include<stdio.h>
#include<math.h>
#include<stdio.h>
//----main body of program ------------
int main(){
    int num;
    int a = 0;
    int kir = 0;
    int t = 0;
    printf("Enter the number :");
    scanf("%d",&num);
    while ( kir != num ){
        kir = pow(2, a) - 1;
        if( kir == num  ){
            printf("%d is a Mersenne number.\n",num);
            t++;
            break;
        }
        else if( kir > num )
            break;
        a++;
    }
    if( t == 0)
        printf("%d is not a Mersenne number.\n",num);
    return 0;
}
