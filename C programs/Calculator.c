#include<stdio.h>
void main()
{
    int a,add,sub,mul,mod,div,x,y;
    printf("Enter two numbers x & y :\n");
    scanf("%d%d",&x,&y);
    printf("1=Addition\n");
    printf("2=Subtraction\n");
    printf("3=Multiplication\n");
    printf("4=Division\n");
    printf("5=Modulus\n");
    printf("Enter your choice\n:");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1: add = x + y;
              printf("addition of %d and %d is= %d\n",x,y,add);
              break;
        case 2: sub = x - y;
              printf("subtraction of %d and %d is= %d\n",x,y,sub);
              break;
        case 3: mul = x * y;
              printf("multiplication of %d and %d is= %d\n",x,y,mul);
              break;
        case 4: div = x / y;
              printf("division of %d and %d is= %d\n",x,y,div);
              break;
        case 5: mod = x % y;
              printf("modulus of %d and %d is= %d\n",x,y,mod);
              break;
        default :
              printf("wrong choice");
    }
}