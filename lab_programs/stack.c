//insetion
//deletion
//peak
//display
#include<stdio.h>
#define max 5
int main()
{
    int choice,a[100],i,n,top=-1,val,ele;
    printf("Enter your choice: ");
    printf("1. INSERTION");
    printf("2. DELETION");
    printf("3. PEEK");
    printf("4. DISPLAY");
    scanf("%d",&choice);
    switch(choice)
    {
        do
        {
            case 1: 
                 void push();
                    {
                        if(top == max-1)
                        {
                            printf("stack is overflow\n");
                        }    
                        else
                        {
                            printf("Enter the element: ");
                            scanf("%d",&val);
                            a[++top]=val;
                        }    
                    }
                    break;
            case 2:
                    void pop();
                    {
                        if(top == -1)
                        {
                            printf("stack is empty\n");
                        }    
                        else
                        {    
                            ele = a[top];
                            top--;
                        }    
                    } 
                    break;
            case 3:
                    void peek();
                    {
                            printf("Top is at %d",top);
                    }
                    break;
            case 4:
                    void display();
                    {
                        if(top == -1)
                        {
                            printf("stack is empty");
                        }    
                        else
                        {    
                            printf("The stack elements are:-    ");
                            for(top=0;top<max-1;top++)
                            {
                                printf("%d\t",a[top]);
                            }
                        }    
                    }
                    break;
            case 5:
                    exit(0);     
        }            
        while(1);
    return 0;    
}       