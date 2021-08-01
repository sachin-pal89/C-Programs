#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("\nEnter the string ");
    scanf("%[^\n]s",s);
    
    int a=0,b=0,c=0;
    for(int i=0;s[i]!='\0';i++)
    {
         if(s[i]>64 && s[i]<93 || s[i]>96 && s[i]<123)
         {
             a += 1;
         }  

         if(s[i]>='0' && s[i]<='9')
         {
             b += 1;
         }

         if(32<=s[i]&& s[i]<=47 || 58<=s[i]&& s[i]<=64 || 91<=s[i]&& s[i]<=96 || 123<=s[i]&& s[i]<=126)
         {
             c += 1;
         }
    }

    printf("\nNo.of Alphabets is: %d \nNo.of digits is: %d \nNo.of characters is: %d",a,b,c);
    return 0;
}