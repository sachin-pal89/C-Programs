#include<stdio.h>
struct student
{
    int roll;
    char name[40];
    char dept[50];
    char course[20];
    int yoj;
};

struct student s[10];

void display(struct student s[],int n);
void student_in_year(struct student s[],int,int);

void main()
{
    int i,n,yoj,roll;
    printf("\tSTUDENT DATABASE");
    printf("\nEnter number of students:");
    scanf("%d",&n);
    printf("\nEnter Data:");

    for(i=0;i<n;i++)
    {
        printf("\nStudent%d-->",i+1);
        printf("\nRoll No:");
        scanf("%d",&s[i].roll);
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Department: ");
        scanf("%s",s[i].dept);
        printf("Course: ");
        scanf("%s",s[i].course);
        printf("Year of joining: ");
        scanf("%d",&s[i].yoj);
    }

    printf("\nSTUDENT REPORT:\n");
    printf("--------------------------------------------");
    printf("\nROLL NO     NAME     DEPARTMENT       COURSE        YEAR OF JOINING\n");
    printf("--------------------------------------------");
    display(s,n);

    printf("\n\tSearch a Student Record: ");
    printf("\nenter year of joining: ");
    scanf("%d",&yoj);
    student_in_year(s,n,yoj);
}

void display(struct student s[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n%d        %s       %s                %s                 %d\n",s[i].roll,s[i].name,s[i].dept,s[i].course,s[i].yoj);
    
    }
}

void student_in_year(struct student s[],int n1,int yoj1)
{
    int flag=0;
    printf("\n Details are:");
    for(int i=0;i<n1;i++)
    {
        if(s[i].yoj == yoj1)
        {
            printf("\nROll Number: %d",s[i].roll);
            printf("\nName: %s",s[i].name);
            printf("\nDepartment: %s",s[i].dept);
            printf("\nCourse: %s\n",s[i].course);
            flag=1;
        }

        if(flag==0)
           printf("No such Record!!!");
    }
}

