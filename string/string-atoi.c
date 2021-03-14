/*Write a C program to sort a string array in ascending order.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
	char a[50];
	printf("\nInput the string :");
	fgets(a, sizeof a, stdin );
    
    //printf("%ld\n",strlen(a) - 1);
    atoi(a); // convert ascci value in integer value 
	int i = 0, j;
    int temp;

	for( i = 0; i < strlen(a) - 1; i++ ){
        int min = i;
        for( j = i; j < strlen(a) - 1; j++ ){
            if( a[min] > a[j])
            	min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
	}
    printf("After sorting the string appears like : ");
	printf("%s",a);
	
 /* //printf("%ld ",strlen(a) - 1);
    printf("After sorting the string appears like : ");
	i = 0;
	while( a[i] != '\0' && i < strlen(a) - 1 ){
		printf("%c", a[i]);
		i++;
	} */

    return 0; 
}
