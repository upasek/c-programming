/*Write a program in C to find the number of times a given word 'the' appears in the given string.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char a[50];
	printf("Input the string :");
	fgets (a, sizeof a, stdin );

	char b[] = "the";
	
	int l1 = strlen(a) - 1;
    int l2 = strlen(b);
  //  printf("\n%d\n",strlen(b));
    int kir = 0;
	for(int i = 0; i < l1; i++ ){
		int count = 0;
		int k = i;
		for(int j = 0; j < l2; j++ ){
			if( a[k] != b[j])
				break;
			else if(a[k] == b[j]){
				count++;
				k++;
			}
			if( count == strlen(b)){
               kir++;
			}
		}	
	}
	printf("\nThe frequency of the word 'the' is : %d\n\n",kir );
	return 0;
}
