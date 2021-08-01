#include<stdio.h>
#include<string.h>

void main()
{
    char fnm[10],mnm[10],lnm[10],name[30];
    printf("Enter First name :-> ");
    scanf("%s",fnm);
    printf("Enter Middle name :-> ");
    scanf("%s",mnm);
    printf("Enter Last name :-> ");
    scanf("%s",lnm);
    strcpy(name,fnm);
    strcat(name," ");
    strcat(name,mnm);
    strcat(name," ");
    strcat(name,lnm);
    printf("Your complete name :-> %s",name);
}