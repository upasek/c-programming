/*finding the address of the six numbers*/
#include <stdio.h>
int main (){
    int i;
    int a[]={24,34,12,44,56,17};

    for (i=0;i<6;i++){
        printf ("\nelement no.%d",i);
        printf ("\taddress = %p",&a[i]);
    }
    printf("\n");
    return 0;
}
