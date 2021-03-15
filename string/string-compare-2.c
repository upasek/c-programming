/*Write a program in C to compare two string .*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
   char a[50];
   char b[50];
   printf("input the frist string :");
   fgets(a, sizeof a, stdin );

   printf("input the second string :");
   fgets(b, sizeof b, stdin );

   if ( strncmp(a, b, 5) == 0 ){
   	printf("\nThe both strings are equal\n");
   }
   else 
   	printf("\nThe both strings are not equal\n");

   return 0;

}
