#include<stdio.h>
void main(){
    char a[100];
    int i, l = 0;
    printf("Input a string : ");
    scanf("%s",a);
    for( i = 0; a[i] != '\0'; i++){
        l++;  
    }
    printf("The string contains %d number of characters.",l);
    printf("\nSo, the length of the string %s is : %d\n",a,l);
}
