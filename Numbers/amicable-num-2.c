/*The program in C to count the amicable pairs in an array. */
#include<stdio.h>
int kiran(int x ){
    int i;
    int sum = 0;
    for( i = 1; i <= x/2; i++){
        if( x % i == 0){
            sum = sum + i;
        }
    }
    return sum;
}
int main(){
    int a[4];
    int i, j;
    int s;
    int q = 0;
    int sum1, sum2;
    printf("Enter the size of array :");
    scanf("%d",&s);
    printf("Input the number of elements to be stored in the array: %d \n",s);
    for( i = 0; i < s; i++ ){
        printf("element - %d :",i);
        scanf("%d",&a[i]);
    }
    for( i = 0; i < s; i++ ){
        sum1 = kiran(a[i]);
        for( j = i+1; j < s; j++){
            sum2 = kiran(a[j]);
            if( sum1 == a[j] && sum2 == a[i]){
               q++;
            }
        }
    }
    printf("\nNumber of Amicable pairs presents in the array: %d\n\n",q);
    return 0;
}
