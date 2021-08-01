#include<stdio.h>
int modify(int a[]);

void main()
{
    int arr[10];

    printf("\nEnter the element of array ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    modify(arr);
    
    printf("\nModified Array is ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    
} 

  int modify(int a[])
  {
    for(int i=0;i<10;i++)
    {
        a[i] *= 3;
    } 
  }