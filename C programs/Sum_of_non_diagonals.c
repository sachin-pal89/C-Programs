#include<stdio.h>
#include<math.h>

int i,j,s=0,r,c;
void diago(int a[3][3])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i!=j)
            s = s + a[i][j];
        }
    }

    //show the sum of non diagonal elements
    printf("\nSum of non diagonal elements are: %d",s);
}

void main()
{
    int a[3][3];
    printf("Enter how many rows: ");
    scanf("%d",&r);
    printf("Enter how many column: ");
    scanf("%d",&c);

    if(r==c)
    {   
        printf("Enter the numbers ");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }

    //show the matrix elements
    printf("The matrix is: ");
    for(int i=0;i<r;i++)
    {
        printf("\n");
        for(int j=0;j<c;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }

    diago(a);

}