/*Write a program in C to extract a substring from a given string.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
	char a[50];
	int length, start;
	printf("\nInput the string :");
	fgets(a, sizeof a, stdin );
    
    printf("Input the position :");
    scanf("%d",&start);

    printf("Input the length of substring :");
    scanf("%d",&length);

    printf("The string retrive from the string is : \"");
    int l = (start -1) + length;
    for( int i = (start -1); i < l; i++ ){
    	printf("%c",a[i]);
    }

  // second methode 
    /*
    char b[50];
    int i = 0;
    while (i < length) {
      b[i] = a[start + i -1];
      i++;
    }
    sstr[c] = '\0';
     printf("%s",b);
   */

    printf("\" \n\n");
    return 0; 
}
