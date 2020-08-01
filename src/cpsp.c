#include <stdio.h>
void main() {
    float CP,SP,P,L;
    printf("Enter the cost price : ");
    scanf("%f",&CP);
    printf("Enter the selling price : ");
    scanf("%f",&SP);

    P = SP - CP;/*  Profit = Selling Price - Cost Price */
    L = CP - SP;/* Loss = Cost Price - Selling Price */

    if(P > 0)
        printf ("The seller has made a profit of Rs.%.3f\n",P);

    if(L > 0)
        printf ("The seller is in loss by Rs.%.3f\n",L);

    if(P == 0)
        printf ("There is no loss or no profit\n");

}
