#include<stdio.h>
#include<string.h>

int main()
{
    char s;
    int i;
    printf("\nEnter the string: ");
    scanf("%c",&s);
    
    if( s > 96 && s < 123)
    {
       printf("\n%c given character is in lowercase ",s);
    }
    else{
        printf("\n%c given character is not in lowercase ",s);
    }
    return 0;
}