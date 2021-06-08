/*Write a program in C to read a sentence and replace lowercase characters by uppercase .*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[100];
	printf("Input the string in lowercase :");
	fgets(a, sizeof a, stdin );

	printf("The given sentence is :%s",a);
    //printf("\n%ld\n",strlen(a));
	atoi(a);
	int i = 0; 
	for( i = 0; i < strlen(a) - 1; i++ ){
		if( a[i] >= 97 && a[i] <= 122 )
		   a[i] = a[i] - 32;
	}
	
	printf("\nHere is the above string in UPPERCASE :%s\n\n",a);
	return 0;
}
