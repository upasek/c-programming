/*Write a program in C to print individual characters of string in reverse order.*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	int i;
	printf("input the string : ");
	fgets(a, sizeof a, stdin );
	int l = strlen(a) - 1;
    printf("The characters of the string in reverse are :\n");
    for( i = l - 1; i >= 0; i-- ){
    	printf("%c ",a[i]);
    }
    printf("\n");
    return 0;
}