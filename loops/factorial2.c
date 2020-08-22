/*FInding the factorial of any number*/

#include <stdio.h>
int main () {
    int i,a,factorial=1;
    printf ("Enter the number:");
    scanf ("%d",&a);
    for (i=1;i<=a;i++){
        factorial=factorial * i;
    }
    printf ("factorial of %d = %d\n",a,factorial);

    return 0;
}
