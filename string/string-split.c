/*Write a program in C to split string by space into words. */
#include<stdio.h>
#include<ctype.h>
int main(){
	char a[50];
	printf("Input the string :");
	fgets(a, sizeof a, stdin );
     
	int i = 0;
	while( a[i] != '\0'){
		if(isspace(a[i])) 
			a[i] = '\n';
		i++;
	}

	printf("\nStrings or words after split by space are : \n\n");
	printf("%s \n\n",a); 
	return 0;
}
