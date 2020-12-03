#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int num = 0;

    char a[50];
    printf("Input first the string : ");
    fgets (a, sizeof a, stdin );

    char b[50];
    printf("Input the second string for matching : ");
    fgets(b, sizeof b, stdin );

    int l1 = strlen(a);
    int l2 = strlen(b);
    //printf("%d",l2);
    int kir = 0;
    for(int i = 0; i <= l1-l2; i++ ){
        int count = 0;
        int k = i;
        for(int j = 0; j < l2; j++ ){
            if( a[k] != b[j])
                break;
            else if(a[k] == b[j]){
                count++;
            }
            if( count == l2 - 1 ){
                printf("\nThe pattern is match at location %d .\n\n",k);
                num++;
            }
            k++;
        }	
    } 
    if (num == 0)
        printf("\nThe pattern is not match\n\n");

    return 0;
}
