#include<stdio.h>
#include<string.h>

int palindrome(char s[],int low,int high)
{   
    int count=0;
    if(low > high)
    {
        return 1;
    }

    if(s[low] == s[high])
    {
        count = palindrome(s,low+1,high-1);
    }
    else{
        count = 0;
    }

    return count;
}
int main()
{
    char s[20];
    printf("\nEnter the string: ");
    scanf("%[^\n]s",s);
    
    int low,high;
    low = 0;
    high = strlen(s) - 1;
    int l = palindrome(s,low,high);
    if(l==1)
    {
        printf("\n%s is a palindrome ",s);
    } 
    else{
        printf("\n%s is not a palindrome ",s);
    }
    return 0;
}