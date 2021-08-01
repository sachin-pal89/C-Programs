#include<stdio.h>
void main()
{
    int first[3][3],sec[3][3];

    printf("\nEnter the element of array\n");
    for(int i=0;i<3;i++)
    {   
        for(int j=0;j<3;j++)
        {
        scanf("%d",&first[i][j]);
        }

    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sec[i][j] = first[j][i];
        }
    }
    
    printf("\nTranspose of the given matrix is as follow ");
    for(int i=0;i<3;i++)
    {   
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d\t",sec[i][j]);
        }
    }
}