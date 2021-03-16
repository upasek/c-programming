/*Write a program in C to Concatenate Two Strings Manually.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char a[50];
	printf("Input the string :");
	fgets(a, sizeof a, stdin );

	char b[50];
	printf("Input the string :");
	fgets(b, sizeof b, stdin );
	
	int l1 = strlen(a) - 1;
	int l2 = strlen(b) - 1;
    int i;
    a[l1] = ' ';
    for( i = 0; i < l2; i++ ){
    	a[i + (l1+1)] = b[i];
    }

   // strncat(a, b, 3);
 
    printf("\nAfter concatenation the string is :%s\n\n",a);
	return 0;
}
