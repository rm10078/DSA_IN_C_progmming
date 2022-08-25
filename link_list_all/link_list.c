#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linktrav(struct node * ptr){
    while (ptr!=NULL)
    {
        printf("--->%d",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main(){
    struct node * first;
    struct node * second;
    struct node * third;
    struct node * last;

    first=(struct node *)malloc(sizeof(struct node ));
    second=(struct node *)malloc(sizeof(struct node ));
    third=(struct node *)malloc(sizeof(struct node ));
    last=(struct node *)malloc(sizeof(struct node ));

    first->data=10;
    first->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=last;
    last->data=49;
    last->next=NULL;

    linktrav(first);

    return 0;
}