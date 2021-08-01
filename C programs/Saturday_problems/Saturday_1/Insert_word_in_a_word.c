#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("\nEnter the string ");
    scanf("%[^\n]s",s);
    
    char p[100];
    printf("\nEnter the word that is to be inserted ");
    scanf("%s",p);
    
    strcat(s,p);
    printf("\n%s",s);
}