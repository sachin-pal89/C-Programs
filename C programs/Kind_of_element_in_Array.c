#include<stdio.h>
void check(int a[]);

void main()
{
    int a[10];

    printf("\nEnter the elements of array ");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }

    check(a);
}

void check(int a[])
{
    int p=0,n=0,z=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]>0)
        {
             p += 1;
        }
        else if(a[i]<0)
        {
            n += 1;
        }
        else 
        {
            z += 1;
        }
    }

    printf("\nNo. of +ve elements = %d \nNo. of -ve elements = %d \nNo. of zero's in array = %d ",p,n,z);
}