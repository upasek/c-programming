/* finding element in array which is enter by user*/
#include <stdio.h>
int main (){
    int a[10],i,key,pos;
    int n = 0, m;
    printf("Enter the size of array : ");
    scanf("%d",&m);
    printf ("\nEnter the element :");
    for (i = 0; i < m; i++){
        scanf ("%d",&a[i]);
    }

    printf("\nThe given array is :");
    for( i = 0; i < m; i++ )
        printf("%d ",a[i]);

    printf ("\n\nEnter the element which have to search :");
    scanf ("%d",&key);

    for (i = 0; i < m; i++){
        if (key == a[i]){
            printf ("\n%d are present in array at %d position\n\n",a[i],i);
            n++;
            break;
        }
    }
    if(n = 0)
        printf ("\n%d element are not found in array\n\n",key);
    return 0;
}
