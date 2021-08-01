#include<stdio.h>
void main()
{
    int m,n,x,y;

    printf("\nEnter the no. of row & column in first array ");
    scanf("%d%d",&m,&n);
    int first[m][n];

    printf("\nEnter elements of first array ");
    for(int i=0;i<m;i++)
    {   
        for(int j=0;j<n;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }

    printf("\nEnter the no. of row & column in second array ");
    scanf("%d%d",&x,&y);
     int second[x][y];

    printf("\nEnter elements of second array ");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d",&second[i][j]);
        }
    }

    
    printf("\nAddition of two array is ");
    for(int i=0;i<m;i++)
    {   
        printf("\n");
        for(int j=0;j<n;j++)
        {
            printf("%d\t",first[i][j] + second[i][j]);
        }
    }

}