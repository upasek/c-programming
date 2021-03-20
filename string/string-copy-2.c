/*Write a program in C to copy one string to another stringby using library function . */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main () {
	char a[50];
	char b[50];
	printf("Input the string :");
	fgets(a, sizeof a, stdin );
    int i = 0;

    i = strlen(a);
    strcpy(b,a);
	/*int i = 0;
	while( a[i] != '\0' ){
		b[i] = a[i];
		i++;
	}
	b[i] = '\0';*/
	printf("The frist string is : %s\n",a);
	printf("The second string is : %s\n",b);
	printf("Number of characters copied : %d\n\n",i);
	return 0;
}
