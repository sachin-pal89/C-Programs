#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("\nEnetr the string ");
    scanf("%[^\n]s",s);

    for(int i=0;s[i]!='\0';i++)                                           
    {
        printf("%c ",s[i]);
    }
    return 0;
}