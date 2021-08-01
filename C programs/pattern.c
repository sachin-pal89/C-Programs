#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the rows of the pattern ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(k=65;k<=65+n-i;k++)
        {
            printf("%c",k);
        }
        for(k=65+n-i-1;k>=65;k--)
        {
            printf("%c",k);
        }
        printf("\n");
    }
}