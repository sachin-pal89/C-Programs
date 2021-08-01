#include<stdio.h>
void main()
{
    int n,sum=0,i=1,dec,rem;
    printf("Enter num ");
    scanf("%d",&dec);
    do
    {
        rem = dec % 2;
        dec = dec / 2;
        sum = sum + (i*rem);
        i = i*10;
    } while (dec>0);
    
    printf("\nThe binary equivalent is %d",sum);
}