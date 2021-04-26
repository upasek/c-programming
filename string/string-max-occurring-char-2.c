/* Write a program in C to find maximum occurring character in a string.*/
//complecxity is o(n).
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int exits(int i, char ch, char a[], int l1);
int main(){
	char a[50];
	printf("Input the stirng :");
	fgets(a, sizeof a, stdin );
    
    int i = 0;
	int l1 = strlen(a);
	//printf("%d",l1);
    int max = 0;
    char p;
	for( i = 0; i < l1-1; i++){
        if( !(isspace(a[i])) ){
           int c = exits(i, a[i], a, l1);
           if( max < c ){
              max = c;
              p = a[i];
           }
        }
	}
    printf("\nThe Highest frequency of character '%c' \n",p);
    printf("\nappears number of times : %d \n\n",max);
	return 0;
}
int exits( int i, char ch, char a[], int l1){
    int count = 1;
        for( int j = i+1; j <= l1; j++ ){
            if(ch == a[j]){
                count += 1;
            }
        }
    return count;
}
