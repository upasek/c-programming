/*Write a program in C to find the largest and smallest word in a string.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char a[50];
	printf("Input the string :");
	fgets(a, sizeof a, stdin );

    char t[50];
    strcpy(t, a);

    int c = 0, b = 0; //for small word 
    int e = 0, f = 0; //for large word

    int count = 0;
    int i = 0;
    int val = 0;
    while( a[i] != ' '){
    	val++;
    	b++, f++;
    	i++;
    }
    int min = val;
    int max = val;

    i = 0;

    int x = 0, y = 0; // for small word
    int w = 0, z = 0; // for large word 
    while( i <= strlen(a)){
         if(isalpha(a[i])){
         	count++;
         	y = i;
         	z = i;
         }

         if((isspace(a[i])) && a[i] != '\0'){
         	
         	if( min >= count ){
            	min = count;
         	    c = x;
            	b = y;
            }

            else if( max <= count){
            	max = count;
                e = w;
                f = z;
            }
            count = 0;
            x = i+1;
            w = i+1;
         }  
         
       i++;
    }  
  //printf("%d %d\n",c,b); 
    printf("\nThe small word is '");                                                                              
	for( int i = c; i <= b; i++ )
		printf("%c",a[i]);
    
    printf("'\n");

    printf("The largest word is '"); 
    for( int i = e; i <= f; i++ )
    	printf("%c",a[i]);
    
    printf("'\nin the string : %s\n\n",t);
	return 0;
}
