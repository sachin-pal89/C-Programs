#include<stdio.h>
void main()
{
    int number,i,flag=1;
    printf("Enter a number to check whether it is a PRIME NUMBER or not: ");
    scanf("%d",&number);
     
     for(i=2;i<=number/2;i++)
     {
         if((number%i)==0)
         {
             flag=0;
             break;
         }
     }

if(flag==0)
{
    printf("This is not a prime number");
}
else{
    printf("This is a prime number");
}
}