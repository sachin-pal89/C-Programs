#include<stdio.h>

int facto(int c)
{
    if(c<1)
    return 1;

    return c*facto(c-1);
}

int Combo(int a,int b)
{
    int x;
    x = facto(a)/(facto(b)*facto(a-b));
    return x;
}

int main()
{   
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {   
        printf("\n");
        for(int k=1;k<n-i;k++)
        {
            printf("  ");
        }

        for(int j=0;j<=i;j++)
        {
            printf("%d   ",Combo(i,j));
        }

        printf("\n");
    }
    return 0;
}