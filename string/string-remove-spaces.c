/*Write a program in C to read a file and remove the spaces between two words of its content.*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char a[50];
	printf("Input the string :");
	fgets (a, sizeof a, stdin );
    
    printf("\nThe content of the file is : %s",a);
    int l1 = strlen(a) - 1;
	int i = 0;
	int j;
	while( a[i] != '\0'){
		if(isspace(a[i])){
			int temp = a[i];
			for( j = i; j <= l1; j++ ){
				a[j] = a[j+1];
			}
			l1--;
		}
		i++;
	}
	//a[l1+1] = '\0';
    printf("\nAfter removing the spaces the content is : %s \n\n",a);
	return 0;
}
