#include<stdio.h>
#include<conio.h>

void main()
{
    float f,c;
    printf("Enter Temperature in Celsius: ");
    scanf("%f",&c);
    f = 1.8*c+32;
    printf("\nTemperature in Fahrenheit: %f",f);
}