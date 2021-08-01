#include<stdio.h>
#include<string.h>

struct college
{
    int college_id;
    char college_name[20];
};

struct student
{
    int stud_id;
    char stud_name[20];
    int stud_marks;
    struct college C;
}S;

int main()
{   printf("\nEnter the college_id ");
    scanf("%d",&S.C.college_id);
    
    printf("\nEnter the college_name ");
    scanf("%s",S.C.college_name);

    printf("\nEnter the stud_id ");
    scanf("%d",&S.stud_id);
    
    printf("\nEnter the stud_name ");
    scanf("%s",&S.stud_name);
    
    printf("\nEnter the stud_marks ");
    scanf("%d",&S.stud_marks);
    
    printf("\nCollege_id = %d",S.C.college_id);
    printf("\nCollege_name = %s",S.C.college_name);
    printf("\nstud_id = %d",S.stud_id);
    printf("\nstud_name = %s",S.stud_name);
    printf("\nstud_marks = %d",S.stud_marks);
    return 0;
}