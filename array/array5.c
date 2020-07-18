/*program for printing an alphabet and their ascci value*/
#include <stdio.h>
int main (){
    int array[26],i;
    printf("\nAscci value of A to Z alphabet :\n");
    for (i=0;i<=25;i++){
        array[i]='A'+i;
        printf ("%c = %d \n",array[i],array[i]);
    }
    return 0;
}
