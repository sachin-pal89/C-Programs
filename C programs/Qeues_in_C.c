// Sachin - IT - 37
#include<stdio.h>

int Queue[100];
int front = -1;
int rear = -1;

// Insertion in Queue
void Enqueue(int a[],int n)
{
    if(rear==n-1)
    {
        printf("\nQueue Overflow\n");
        return ;
    }
    
    int ele;
    printf("\nEnter the element to be inserted: ");
    scanf("%d",&ele);
    
    if(front==-1)
        front = front +1;
 
    rear = rear +1;
    a[rear] = ele;
    return;
}

// Deletion in Queue
void Dequeue(int a[],int n)
{
    if(front==-1 || front>rear)
    {
        printf("\nQueue Underflow\n");
        return;
    }
    
    front = front +1;
    return;
}

// Displaying Queue
void Display(int a[])
{   
    printf("\nElements of the Queue is:\n");

    for(int i=front;i<=rear;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return;
}


int main()
{
    int n;

    printf("1.For Inserting an element in a Queue\n");
    printf("2.For Deleting an element from a Queue\n");
    printf("3.For Viewing the whole Queue\n");
    printf("4.To Exit\n");

    while(1<10)
    {
         scanf("%d",&n);
    switch(n)
    {
        case 1:
            Enqueue(Queue,100);
            printf("\nFor another operation enter the choice\n");
            continue;
        case 2:
            Dequeue(Queue,100);
            printf("\nFor another operation enter the choice\n");
            continue;
        case 3:
            Display(Queue);
            printf("\nFor another operation enter the choice\n");
            continue;
        case 4:
            printf("\nExited From the process\n");
            break;
        default:
            printf("\nEnter a valid option\n");
            break;
    }
       break;
   }

    return 0;
}

