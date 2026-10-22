//insert
//delete
//rear
//front
//display


#include<stdio.h>
#define max 5
int front = -1,rear = -1, a[max], i = 0,b;
void enqueue()
{
    int val;

    if (rear == max - 1)
    {
        printf("queue is overflow\n");
    }
    else
    {
        printf("Enter the value to be inserted: ");
        scanf("%d", &val);
        a[++front] = val;
        printf("Element inserted successfully\n");
    }
    ++rear;
}
void dequeue()
{
        if (rear == -1)
    {
        printf("queue is underflow\n");
    }
    else
    {
        printf("Deleted element is: %d\n", a[front = i]);
        i ++;
        front++;
        b = front;
    }
}
void peek()
{
    if(front == -1)
    {
        printf("The queue is empty\n");
    }
    else
    {
       printf("The peek element is %d\n", a[front = b]);
    }
}
void display()
{
    if(front == -1)
    {
        printf("The queue is empty");
    }
    else if(front == max)
    {
        printf("No elements\n");
    }
    else
    {
        printf("The queue elements are:\n");
        for(front=b;front<rear;front++)
        {
            printf("%d\t",a[front]);
        }
    }

}
int main(void)
{
    int choice;

    do
    {
        printf("\n--- queue OPERATIONS ---\n");
        printf("1. INSERTION \n");
        printf("2. DELETION \n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input\n");
            return 1;
        }

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
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

    } while (choice != 5);

    return 0;
}
