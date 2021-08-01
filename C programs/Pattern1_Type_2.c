#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=10;j>=i;j--)
        {
            if(j>=i)
            {
                printf(" ");
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }

        for(j=1;j<=10;j++)
        {
            if(j>=i)
            {
                printf(" ");
                printf("%d",j);
            }
            else{
                printf("    ");
            }
        }
        printf("\n");
    }
    return 0;
}