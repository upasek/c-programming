#include<stdio.h>
int main(){
    int i, n, m;
    long num;
    long sum = 0;
    printf("Input the number of terms :");
    scanf("%d",&n);
    printf("Input the number : ");
    scanf("%ld",&num);
    m =  num;
    printf("Expected Output: ");
    for( i = 1; i <= n; i++ ){
        sum = sum + num;
        printf(" %ld ",num);
        num = (num * 10) + m; 
    }
    printf("\nThe sum of the saries = %ld\n",sum);

    return 0;
}
