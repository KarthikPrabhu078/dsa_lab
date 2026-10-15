//insetion
//deletion
//peak
//display
#include<stdio.h>

#define max 5

int a[max],i,n,top=-1,val,ele;
void push()
{
    if(top == max-1)
    {
        printf("Stack is full");
    }
    else
    {
        printf("Enter the value to be inserted: ");
        scanf("%d",&val);
        a[++top]=val;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        ele=a[top];
        top--;
        printf("Deleted element is: %d",ele);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Top element is: %d",a[top]);
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("The stack elements are: ");
        for(i=0;i<=top;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
int main(void)
{
    int choice;
    do
    {
        printf("\n1. INSERTION\n");
        printf("2. DELETION\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}      