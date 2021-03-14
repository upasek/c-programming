/* Write a program in C to separate the individual characters from a string.*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	int i = 0;
	printf("input the string : ");
	fgets(a, sizeof a, stdin );
	printf("The characters of the string are :");
	while( a[i] != '\0' ){
        printf("%c ", a[i]);
        i++;
	}
	return 0;
}
