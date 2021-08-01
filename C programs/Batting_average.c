#include<stdio.h>
#include<string.h>

struct Player
{
    char PlayerName[10];
    char teamName[10];
    int battingAvg;
};

void main()
{
    struct Player p[10],temp;
    int n,i,j;

    printf("Enter no.of Players:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Player Name: \n");
        scanf("%s",p[i].PlayerName);
        printf("Enter Team Name: \n");
        scanf("%s",p[i].teamName);
        printf("Enter Batting average of player: \n");
        scanf("%d",&p[i].battingAvg);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i].battingAvg < p[j].battingAvg)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\nAfter sorting\n");
    printf("\nPlayer Name\t Team Name\t Batting Average\n");
    printf("_____________________________________\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t",p[i].PlayerName);
        printf("%s\t\t",p[i].teamName);
        printf("%d\n",p[i].battingAvg);
    }
}