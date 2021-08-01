#include<stdio.h>
#include<string.h>

struct date 
{
    int dat;
    char month[20];
    int year;
}Din[2];

int main()
{   
    for(int i=1;i<=2;i++)
    {
        printf("\nEnter the date in case%d = ",i);
        scanf("%d",&Din[i].dat);

        printf("\nEnter the month in case%d = ",i);
        scanf("%s",Din[i].month);

        printf("\nEnter the year in case%d = ",i);
        scanf("%d",&Din[i].year);
    }
    
    if(Din[1].dat == Din[2].dat)
    {
         printf("\nEqual");
    }
    else{
        printf("\nUnequal");
    }
    return 0;

}