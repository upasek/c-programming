#include <stdio.h>
void main (){

    int a[20],i,j,p,min;

    for (i=0;i<5;i++)
    {
        printf ("Enter the element :");
        scanf ("%d",&a[i]);

    }
     for (i=0;i<5-1;i++){

        min=i;

        for (j=i+1;j<5;j++)
        {
            if (a[min]>a[j]){
                min=j;
            }
        }
        p=a[i];
        a[i]=a[min];
        a[min]=p;
    }
    for (i=0;i<5;i++){
        printf ("%d",a[i]);
    }


}
