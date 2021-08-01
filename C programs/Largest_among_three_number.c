#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter three integer numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
      {
          if(a>c)
            {
                printf("Largest Number is:%d\n",a);
            }
          else 
            {
                printf("Largest Number is:%d\n",c);
            }
      }
    else
      {
          if(c>b)
            {
                printf("Largest Number is:%d\n",c);
            }
          else
            {
                printf("Largest Number is:%d\n",b);
            }
      }
}