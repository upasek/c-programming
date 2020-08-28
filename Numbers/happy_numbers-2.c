#include<stdio.h>
int main(){
    int num, p, sum = 0;
    
    printf("Input a number : ");
    scanf("%d",&num);
    int y = num;
    
    while(sum != 1 && sum != 4){
        sum = 0;
        while ( num > 0){
            p = num % 10;
            sum = sum + (p*p);
            num = num / 10;
        }
        num = sum;
    }
    
    if( sum == 1)
        printf("%d is a Happy number.\n",y);
    
    else
        printf("%d s not a Happy number.\n",y);
    

    return 0;
}
