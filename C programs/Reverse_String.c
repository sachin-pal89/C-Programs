#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],p[20];
    int i;
    printf("\nEnter the string: ");
    scanf("%[^\n]s",s);
    
    int c = strlen(s);
    for(i=0;s[i]!='\0';i++)
    {
        p[i] = s[c-1-i];
    }

    printf("\nThe string in reverse order is ");
    printf("%s",p);

    return 0;

}