#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter the length of array ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter the elemnet of array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int max,sec_max;
    max = arr[0] ;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {  
            sec_max = max;
            max = arr[i];
        }
        else{
            if(arr[i]>sec_max && arr[i]!= max)
            {
                sec_max = arr[i];
            }
        }
    }

    printf("\nlargets num is = %d & Second Largest num is = %d",max,sec_max);
}