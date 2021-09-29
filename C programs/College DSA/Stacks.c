// Sachin - IT - 37
#include<stdio.h>
void Push();
int Pop();
int Peep();
void Change();
void Display();

int S[100],n,choose;
int top = -1;

int main()
{
    printf("\nEnter the size of Stack which should be under 100: ");
    scanf("%d",&n);

    do
    {
        printf("\n1.Insert an element in Stack ");
        printf("\n2.Delete an element in Stack ");
        printf("\n3.Get an element from  Stack ");
        printf("\n4.Update an element in Stack ");
        printf("\n5.Display all element in the stack "); 
        printf("\n6.Exit \n");
        scanf("%d",&choose);

        switch(choose)
        {
            case 1:
                  Push();
                  break;
            case 2:
                  printf("\nElement deleted is: %d\n",Pop());
                  break;
            case 3:
                  printf("\nElement present at given position is: %d\n",Peep());
                  break;
            case 4:
                  Change();
                  break;
            case 5:
                  Display();
                  break;
            case 6:
                  printf("\nExit done");
                  break;
            default :
                   printf("\nGive a valid option ");
                   break;

        }

    } while (choose != 6);
    return 0;
}

// Insertion of element in the stack
void Push()
{  
    int ele;
    if(top >=n)
      {
          printf("\nStack Overflow ");
          return;
      }
    
    printf("Enter the number to be inserted\n ");
    scanf("%d",&ele);

    top = top +1;
    S[top] = ele;
    return;
}

//Deletion of element from the stack
int Pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow \n");
        return -1;
    }

    top = top -1;
    return S[top+1];
}

// To get any element from the stack
int Peep()
{   
    int i;
    printf("\nEnter the position of the element to be found\n ");
    scanf("%d",&i);

    if(top-i+1 <0)
    {
      printf("\nStack Underflow on peep \n");
      return -1;
    }

    return S[top-i+1];
}

// To Change any element from the stack
void Change()
{
    int i,element;
    printf("\nEnter the position of the element which is to be changed\n ");
    scanf("%d",&i);

    if(top-i+1 <0)
    {
        printf("\nStack Underflow on Change \n");
        return;
    }

    printf("\nEnter the element which is to be placed in the stack at given position\n ");
    scanf("%d",&element);

    S[top-i+1]=element;
    return;
}

// To display elements of whole stack
void Display()

{   
    if(top==-1)
    {
        printf("\nStack is empty \n");
        return;
    }
    
    printf("\n");
    for(int i=0;i<=top;i++)
    {
        printf("%d ",S[i]);
    }
    printf("\n");
    return;
}