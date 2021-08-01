#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    float Fmarks,Smarks;
}S;
int main()
{
    printf("\nEnter Name of student: ");
    scanf("%s",S.name);
     
    printf("\nEnter First year marks of student: ");
    scanf("%f",&S.Fmarks);

    printf("\nEnter Second year matks of student: ");
    scanf("%f",&S.Smarks);

    float avg;
    avg = (S.Fmarks + S.Smarks)/2;

    if(avg>9.0)
    {
        printf("\nEligible for Scholarship ");
    }
    else{
        printf("\nNot Eligible for Scholarship ");
    }
    return 0;
}