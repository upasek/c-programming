/*Write a program in C to print string in reverse order.*/
#include<stdio.h>
#include<string.h>
int main(){
    char  a[10];
    int temp, i, l;
    printf("Input a string to reverse : ");
    scanf("%s",a);
    l = strlen(a);
    for( i = 0; i < l; i++){
        temp = a[i];
        a[i] = a[l-1];
        a[l-1] = temp;
        l--;
    }
    printf(" Reversed string is: %s\n",a);
return 0;
}
