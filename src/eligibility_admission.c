/*To find the eligibility of admission for a professional course */
#include<stdio.h>
int main(){ 
    int marma, marphy, marche, total, total_m_p;
    printf ("Enter the marks in math, phy and che :");
    scanf ("%d%d%d",&marma,&marphy,&marche);

    total = marma + marphy + marche ;
    total_m_p = marma + marphy ;

    if ((total >= 180 || total_m_p >= 140) && ( marma >= 65 && marphy >= 55 && marche >= 50 )){
       printf ("The candidate is eligible for admission\n");
    }
    else 
        printf ("The candidate is not eligible for admission\n");
    
    return 0;
}
