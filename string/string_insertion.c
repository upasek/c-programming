#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char a[50], b[50];
    int length1, length2, num;
    
    printf("Input the first string : ");
    fgets(a, sizeof a, stdin);
    length1 = strlen(a) - 1;
    
    printf("Input the second string : ");
    fgets(b, sizeof b, stdin);
    length2 = strlen(b) - 1;

    printf("Input the position : ");
    scanf("%d",&num);

    //length of 2 string
    int len = (length1 + length2) - 1;

    //length of first string after given position
    int len_s = length1 - (num - 1);

    int m = length1 - 1;
    for (int i = len; i > len - len_s; i--){
        a[i] = a[m];
        m--;
    }

    int n = 0;
    for (int i = num-1; i <= (num - 2) + length2; i++){
        a[i] = b[n];
        n++;
    }
    printf("String after insertion : ");
    for(int i = 0; i <= length1+length2; i++)
        printf("%c",a[i]);

    printf("\n\n");
};
