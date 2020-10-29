#include<stdio.h>
void main(){
    // program in C to find the missing number from a given array. There are no duplicates in list. 
    // By using nested loop methode 
    // complexity o(n*n)
    // unsorted array 
    int a[8] = {1, 3, 4, 2, 5, 6, 9, 8 };
    int i, b = 1;
    printf("The given array is :");
    for( i = 0; i < 8; i++ )
        printf("%d  ",a[i]);
    printf("\n");
    //searching 
    while(b <= 8){
        int c = 0;
        for( i = 0; i < 8; i++ ){
            if( b == a[i]){
                c++;
                break;
            }
        }
        if( c == 0 ){
            printf("\nThe missing number is : %d\n",b);
        }
        b++;
    }
}
