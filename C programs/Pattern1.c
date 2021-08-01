#include<stdio.h>
#include<string.h>

int main()
{   
    int n;
    printf("\nEnter the greatest number in pattern ");
    scanf("%d",&n);
    int a[n];

    for(int m=0;m<n;m++)
    {
        a[m] = n-m;
    }
    
    int i,j,k,l;
    for( i=0;i<n;i++)
    {
        for( j=0;j<n-i;j++)
        {   
            printf(" ");
            printf("%d",a[j]);
        }
        for( k=i*2;k>0;k--)
        {   
            if(i>10)
            {
                printf("  ");
            }
            printf("  ");
        }
    
        for( l=n-1-i;l>=0;l--)
        {   
            printf(" ");
            printf("%d",a[l]);
        }
        printf("\n");
    }
    return 0;
}