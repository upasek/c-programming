/*Write a program in C to print only the string before new line character.*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char a[] = "The quick brown fox \n jumps over the \n lazy dog. \n";
	//printf("Input a string :");
	//fgets(a, sizeof a, stdin );   // when we take input from user.
    
    printf("string is : %s",a);
    printf("\nExpected Output : ");
    int i = 0;
    while( isprint(a[i])){// a[i] != '\n'){
        putchar (a[i]);  // printf("%c",a[i]);
        i++;
    }
    printf("\n\n");
	return 0;
}
