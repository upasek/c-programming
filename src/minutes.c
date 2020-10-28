#include<stdio.h>
int main(){
    int h, m, output;
    printf("\nInput hours: ");
    scanf("%d",&h);
    printf("\nInput minutes: ");
    scanf("%d",&m);
    output = ( h * 60 ) + m;
    printf("\nTotal: %d\n",output);
    return 0;
}
