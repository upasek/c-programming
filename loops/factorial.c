/*Program for finding the factorial of any number.*/
#include <stdio.h>
int main (){
    int i=1,a,factorial=1;
    printf ("Enter the number:");
    scanf ("%d",&a);
    while (i<=a){
        factorial = factorial * i ;
        i++;
    }
    printf ("\nfactorial = %d\n",factorial);
    
    return 0;
}
