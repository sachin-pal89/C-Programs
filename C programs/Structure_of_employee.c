#include<stdio.h>
#include<string.h>

struct employee
{
    char name[20];
    char addr[50];
    int id;
    long long int phNum;
}E1,E2;
  
int main()
{
    struct employee E1 = {"Spider Pant","Gaba",1133,6456347654};
    struct employee E2 = {"Jason Roy","Wales",7766,9284873922};
    
    printf("Employee 1 info:\n");
    printf("Name: %s\n Address: %s\n ID: %d\n Phone Number: %lld\n",E1.name,E1.addr,E1.id,E1.phNum);

    printf("Employee 2 info:\n");
    printf("Name: %s\n Address: %s\n ID: %d\n Phone Number: %lld\n",E2.name,E2.addr,E2.id,E2.phNum);

    return 0;
}