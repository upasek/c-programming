/* finding positive negative even odd element in array */
#include <stdio.h>
int main (){
    int a[20],i,n=0,m,p,q=0,s;
    int end;
    printf("Enter the size of array : ");
    scanf("%d",&end);
    printf ("\nEnter the element :");
    for (i = 0; i < end; i++)
        scanf ("%d",&a[i]);
    
    for (i = 0; i < end; i++){
        if (a[i]<0)
            n=n+1;
   
        m=(i+1)-n;
    }
    printf ("\nnumber of negative element are %d",n);
    printf ("\nnumber of positive element are %d",m);
    /* determination of even and odd function */
    for (i = 0; i < end; i++){
        if (a[i]>0){
            p=a[i]%2;
            if (p==0){
                q=q+1;
                s=m-q;
            }
        }
    }
    printf ("\nnumber of even elements are %d",q);
    printf ("\nnumber of odd elements are %d\n",s);
 
    return 0;
}
