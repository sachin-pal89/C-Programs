// Sachin - IT - 37
#include<stdio.h>
void Enqueue();
void Dequeue();
void Display();

int Queue[100],n,choice;
int front = -1;
int rear = -1;

int main()
{
    printf("\nEnter the size of Queue less than 100: ");
    scanf("%d",&n);

    do
    {  
       printf("1.Insert \n2.Delete \n3.Display \n4.Exit \n");
       scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            Display();
            break;
        case 4:
            printf("\nExit");
            break;
        default:
            printf("\nEnter a valid option\n");
    }
       
   } while(choice != 4);
    return 0;
}

// Insertion in Queue
void Enqueue()
{   
    int ele;
    if(rear >=n-1)
    {
        printf("\nQueue Overflow\n");
        return;
    }
    
   
    printf("Enter the element to be inserted: ");
    scanf("%d",&ele);
    
    if(front==-1)
        front = front +1;
 
    rear = rear +1;
    Queue[rear] = ele;
}

// Deletion in Queue
void Dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("\nQueue Underflow\n");
        return;
    }
    else
    {
       printf("Element Deleted is %d\n",Queue[front]);
       front = front + 1;
    }
}

// Displaying Queue
void Display()
{   
    if(front==-1 || front>rear)
        printf("Queue is empty\n");
    
    else
    {   
        printf("\n");
        for(int i=front;i<=rear;i++)
          {
            printf("%d ",Queue[i]);
          }
        printf("\n");
    }
    return;
}

