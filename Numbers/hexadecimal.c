//55. Write a program in C to convert a decimal number to hexadecimal. Go to the editor
#include<stdio.h>
void main(){
    int num;
    char arr[10];
    int item = 0;
    int p;
    printf("Input any Decimal number: ");
    scanf("%d",&num);
    while( num > 0 ){
        p = num % 16;
        num = num / 16;
        if( p < 10){
            arr[item] = p + 48;
            item++;
        }
        else{
            arr[item] = p + 55;
            item++;
        }
    }

    printf("The hexadecimal number is : ");
    for (int i = item - 1; i >= 0; i--){
        printf("%c",arr[i]);
    }
    printf("\n\n");
}
