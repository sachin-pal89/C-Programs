#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("\nEnter the string ");
    scanf("%[^\n]s",s);

    int count=0;
    int vowels =0, conso=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>64 && s[i]<93 || s[i]>96 && s[i]<123)
        {
            count += 1;
            char c = s[i];
            switch(c)
            {
                case 'a':
                        vowels += 1;
                        break;
                case 'e':
                        vowels += 1;
                        break;
                case 'i':
                        vowels += 1;
                        break;
                case 'o':
                        vowels += 1;
                        break;
                case 'u':
                        vowels += 1;
                        break;
                case 'A':
                        vowels += 1;
                        break;
                case 'E':
                        vowels += 1;
                        break;        
                 case 'I':
                        vowels += 1;
                        break;
                case 'O':
                        vowels += 1;
                        break;
                case 'U':
                        vowels += 1;
                        break;
                default :
                        conso += 1;
                        break;
            }
        }
    }

    printf("\nNo.of words in a string is %d ",count);
    printf("\nNo.of vowels is %d \nNo.of consonant is %d ",vowels,conso);
    return 0;
}