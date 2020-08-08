/*To find an electeic bill of costomer*/
#include<stdio.h>
int main(){
    int id, unit;
    char name[20];
    float charge, amount, surcharge = 0, net_amount;  
    printf ("Enter the ID of customer : ");
    scanf ("%d",&id);
    printf ("Enter the name of customer  : ");
    scanf ("%s",name);
    printf ("Enter the unit consumed by customer : ");
    scanf ("%d",&unit);
    // unit                                          charge
    // upto 199                                      @ 1.20
    // 200 and above but less than 400               @ 1.50
    // 400 and above but less than 600               @ 1.80
    // 600 and above                                 @ 2.00
    // if bill exceeds Rs. 400 then a surcharge of 15% 
    // the minimum bill should be Rs. 100/- 
    if (unit <= 199)
        charge = 1.20;
    else if ( unit >= 200 && unit < 400)
        charge = 1.50;
    else if ( unit >= 400 && unit < 600 )
        charge = 1.80;
    else if (unit >= 600 )
        charge = 2.00;
    amount = unit * charge;
    if ( amount > 400 ){
      surcharge =( 15 * amount ) / 100;
    }
    net_amount = amount + surcharge;
    if ( net_amount < 100 )
        net_amount = 100;
    printf ("\n\nCustomer ID no : %d\n",id);
    printf ("Costomer name : %s\n",name);
    printf ("Unit consumed : %d\n",unit);
    printf ("Amount charge %f per unit : %f\n",charge,amount);
    printf ("Surcharge Amount : %f\n",surcharge);
    printf ("Net Amount paid by costomer : %f\n",net_amount);
   
    return 0;
}
