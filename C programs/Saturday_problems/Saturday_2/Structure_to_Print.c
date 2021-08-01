#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char nam[20];
    char Dep[20];
    char cou[20];
    int year;
};

void print(struct student C)
{
    printf("\n Roll.No= %d\n Name= %s\n Department= %s\n Course= %s\n Year of joining= %d\n",C.roll,C.nam,C.Dep,C.cou,C.year);
}

int main()
{   
    struct student C;

    printf("\nEnter Roll no ");
    scanf("%d",&C.roll);
    
    printf("\nEnter Name ");
    scanf("%s",C.nam);
    
    printf("\nEnter Department ");
    scanf("%s",C.Dep);
    
    printf("\nEnter Course ");
    scanf("%s",C.cou);
    
    printf("\nEnter Year ");
    scanf("%d",&C.year);

    print(C);
    return 0;
}