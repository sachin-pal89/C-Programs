#include<stdio.h>
void main()
{
    int first[10],sec[10];

    printf("\nEnter the elemnets of array ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&first[i]);
    }

    for(int i=0;i<10;i++)
    {
        sec[i] = first[9-i];
    }
    
    printf("\nArray in reverse order is as follow\n ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",sec[i]);
    }
    
}