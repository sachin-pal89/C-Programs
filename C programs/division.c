#include<stdio.h>
int main()
{
    float num1,num2;
    double div;
    printf("Enter two number to divide\n");
    scanf("%f%f",&num1,&num2);
    div = num1 / num2 ;
    printf("Division of two num is %lf",div);
    return 0;
}