#include<stdio.h>
#include<string.h>
void main(){
    int roll_no, phy, che, math, total;
    float per;
    char name[20],div[10];
    printf ("Enter the roll no :");
    scanf ("%d",&roll_no);
    printf ("Enter the name : ");
    scanf ("%s",name);
    printf ("Enter the marks of phy ,che, math :");
    scanf ("%d%d%d",&phy,&che,&math);
    total = phy + che + math;
    per = (total * 100)/300;
    if ( per >= 60 )
        strcpy(div,"first");
    else if ( per <60 && per >= 45)
        strcpy(div,"second");
    else if ( per < 45 && per >=35 )
        strcpy(div,"pass");
    else 
        strcpy(div,"fail");
    printf ("\n\nRoll no : %d\n",roll_no);
    printf ("Name of student :%s\n",name);
    printf ("Marks in physics = %d\nMarks in chemistry = %d\nMarks in math= %d\n",phy,che,math);
    printf ("Total marks = %d\npercentage = %f\n",total,per);
    printf ("Division = %s\n",div);
}
