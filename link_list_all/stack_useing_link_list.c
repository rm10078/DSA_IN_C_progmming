#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top=NULL;

void push(int d)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data = d;
    if (top == NULL)
    {
        newnode->next = NULL;
    }
    else
    {
        newnode->next = top;
    }
    top = newnode;
    printf("Data Inserted.");
}

void pop()
{
    if (top == NULL)
    {
        printf("The stack is already empty.");
    }
    else
    {
        struct node *newnode = top;
        top = newnode->next;
        free(newnode);
        printf("Data removed.");
    }
}

void trv()
{
    struct node *ptr;
    ptr = top;
    if (ptr == NULL)
    {
        printf("The stack is empty.");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d<-----",ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int choice,n=0,t=1;
    while (t)
    {
        printf("\nChoice one option:\n1:Push\n2:Pop\n3:Display\n4:Exit\nType-->");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter your data:");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            trv();
            break;
        case 4:
            t=0;
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}