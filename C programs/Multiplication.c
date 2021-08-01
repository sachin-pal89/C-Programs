#include<stdio.h>
int main()
{
    int num1,num2;
    double multi;
    printf("Enter two number to multiply\n");
    scanf("%d%d",&num1,&num2);
    multi = num1 * num2 ;
    printf("Multiplication of two num is %lf",multi);
    return 0;
}
