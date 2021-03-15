/*Write a program in C to compare two string without using string library functions.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
	char a[50];
	char b[50];
	printf("input the first string :");
	fgets(a, sizeof a, stdin );

	printf("input the second string :");
	fgets(b, sizeof b, stdin );

    int l1 = strlen(a) - 1;
    int l2 = strlen(b) - 1;
    int l = 0; 
    int i;
    if( l1 == l2 ){

    	for( i = 0; i < l1; i++ ){
       	   if( a[i] == b[i] )
       		  l++;
       }

       if( l == l1 )
       	printf("\nThe length of both strings are equal and \nalso both strings are equal.\n\n");
       else
        printf("\nThe length of both strings are equal \nbut both strings are not equal.\n\n"); 
    }
    else{
    	if( l1 > l2 )
    		printf("\nThe length of first string is greather than second string \n\n");
    	else
    		printf("\nThe length of second string is greather than first string\n\n");
    
    }

    return 0;
}
