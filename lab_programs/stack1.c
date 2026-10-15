#include <stdio.h>

#define max 5

int a[max], top = -1;

void push()
{
    int val;

    if (top == max - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter the value to be inserted: ");
        scanf("%d", &val);
        a[++top] = val;
        printf("Element inserted successfully\n");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Deleted element is: %d\n", a[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is: %d\n", a[top]);
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The stack elements are: ");
        for (i = 0; i <= top; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}

int main(void)
{
    int choice;

    do
    {
        printf("\n--- STACK OPERATIONS ---\n");
        printf("1. INSERTION (PUSH)\n");
        printf("2. DELETION (POP)\n");
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

    } while (choice != 5);

    return 0;
}