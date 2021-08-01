#include <stdio.h>
int main()
{
    int x = 4;

    printf("The value of x is %d\n", x++);
    printf("The value of x after post increment is %d\n", x);
    printf("The value of x is %d\n", ++x);
    printf("The value of x after pre increment is %d\n", x);
    return 0;
}