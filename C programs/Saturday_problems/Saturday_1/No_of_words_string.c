#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("\nEnter the string ");
    scanf("%[^\n]s",s);

    int c = strlen(s);
    int count =0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>64 && s[i]<91 || s[i]>96 && s[i]<123)
        {
            count += 1;
        }
    }

    printf("\nThe no of word in string is %d",count);
    return 0;
}