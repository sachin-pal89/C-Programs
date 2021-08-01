#include<stdio.h>
int sort(int a[],int n) // function to sort elements
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {  for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int a[100],i,n,key;

    printf("Enter size of the array: ");
    scanf("%d",&n);

    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}