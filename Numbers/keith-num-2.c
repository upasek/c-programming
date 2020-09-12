#include<stdio.h>
//----main body of program ----
int main(){
    int num;
    int a[50];
    printf("Enput the number : ");
    scanf("%d",&num);
    //--------for finding the length of number ------
    int p = num;
    int q = 0;
    while( p > 0){
        p = p / 10;
        q++;
    }
    //------------to convert number into array-------
    int t = q;
    int s = num;
    while( s > 0 ){
        a[q-1] = s % 10;
        s = s / 10;
        q--;
    }
    //----------------for finding the given num is keithor not----------
    int i;
    int kir = 0;
    while ( kir == 0  ){
        int sum = 0;
        for( i = 0; i < t; i++){
            sum = sum + a[i];
            printf("%d ",a[i]);
            if( i < t-1) printf("+ ");
        }
        printf(" = %d\n",sum);
        if( sum == num ){
            printf("\nThe given number is a Keith Number.\n\n");
            kir++;
            break;
        }
        else if( sum > num ){
            printf("\nThe given number is not a Keith number.\n\n");
            kir++;
            break;
        }

        for( i = 0; i < t; i++ ){
            a[i] = a[i+1];
        }
        a[t-1] = sum;
    }
    return 0;
}
