/* Write a program in C to remove characters in String Except Alphabets.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char a[50];
	printf("Input the string :");
	fgets(a, sizeof a, stdin );
    char temp;
    int j;
    int l1 = strlen(a) - 1;
    int b = 0;
    while( a[b] != '\0'){
    	if( isalpha(a[b]) ){
    		b++;
    		continue;
    	}
    	else if( !(isalpha(a[b])) ){
    		temp = a[b];
    		for(  j = b; j < l1; j++ ){
    			a[j] = a[j+1];
    		}
    		a[j] = '\0';
    	}
    }
    printf("\nAfter removing the Output String :%s\n\n",a);
    return 0;
}
