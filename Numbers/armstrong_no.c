/*Program for finding armstrong num in 0 to 5000*/
#include<stdio.h>
#include<math.h>
int main(){
    int i, p ;
    for ( i = 1; i <= 5000; i++ ){
        int sum = 0;
        int  num = i;
        int a = i;
        int n = 0;
        while( a > 0){
            a = a / 10;
            n++;
        }
        while ( num  > 0 ){
            p = num % 10;
            sum = sum + pow(p, n);
            num = num / 10;               
        }
        if ( i == sum && (i < 2 || i > 9) ){
            printf ("%d are armstrong number\n",i);
        }
    }
    return 0;
}
