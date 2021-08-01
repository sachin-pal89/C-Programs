//Program to display elements of an array in reverse order using pointer

#include<stdio.h>
#define Size 10

void main()
{
    int a[Size],*ptr,i,n;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the element of an array: \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    ptr=a+n-1;
    printf("\nThe elements in reverse order are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",*ptr);
        ptr--;
    }
    
}