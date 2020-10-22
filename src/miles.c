/*Write a C program that converts kilometers per hour to miles per hour. */
#include<stdio.h>
int main(){
    float k, m;
    printf("\nInput kilometers per hour: ");
    scanf("%f",&k);
    //formula = k / 1.609;
    m = k / 1.609;
    printf("\n %f miles per hour\n",m);
    return 0;
}
