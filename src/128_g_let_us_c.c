/*counting positive, negative and zeros*/
#include<stdio.h>
void main (){
    int  num;
    int another = 1;
    int a = 0, b = 0, c = 0;
    for (; another == 1;){
        printf ("Enter the number:");
        scanf ("%d",&num);
        if ( num > 0 ){
            a++;
        }
        else if ( num < 0 ){
            b++;
        }
        else if ( num == 0){
            c++;
        }
        printf ("want to enter another number  1/0:");
        scanf ("%d",&another);
    }
    printf ("positive = %d , negative = %d , zeros = %d\n",a,b,c);
}
