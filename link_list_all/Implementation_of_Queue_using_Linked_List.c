#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue (int d){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=NULL;
    if (front==NULL && rear==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
    printf("data inserted.");
}

void dequeue()
{
    if (front == NULL)
    {
        printf("The queue is empty.");
    }
    else
    {
        struct node *newnode = front;
        front = newnode->next;
        free(newnode);
        printf("Removed.");
    }
}
void display()
{
    struct node *ptr = front;

    if (front == NULL)
    {
        printf("The queue is fully empty.");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d---->", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main()
{
    int choice, n = 0, t = 1;
    while (t)
    {
        printf("Enter your choice : \n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Type your element: ");
            scanf("%d", &n);
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            t = 0;
            break;
        default:
            break;
        }
    }
    return 0;
}
