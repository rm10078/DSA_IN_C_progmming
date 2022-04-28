#include<stdio.h>
#define max 10
int queue[max];
int front=-1,rear=-1,item=0,i=0;

void insert();
void delete();
void traverse();


int main(){
    int choise=0,wv=1;
    while (wv)
    {
    printf("\nFor Insert press = 1\nFor delete press = 2\nFor traverse pree = 3\nFor exit press = 4");
    printf("\nEnter your choise.");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:
        insert();
        break;
    case 2:
        delete();
        break;
    case 3:
        traverse();
        break;
    case 4:
        wv=0;
        break;
    default:
        break;
    }
    }
    return 0;
}

void insert(){
    if((front==0 && rear==max-1) || front==rear+1){
        printf("Your queue is full.");
    }
    else{
        printf("Enter your value :");
        scanf("%d",&item);
        if(rear==max-1){
            rear=-1;
        }
        rear++;
        queue[rear]=item;
        if(front==-1){
            front++;
        }
        printf("Item is added.");
    }
}

void delete(){
    if(front==-1 || front>rear){
        printf("The queue is empty.");
    }
    else{
        if(front==max-1){
            front=-1;
        }
        front++;
        printf("one item is deleted.");
    }
}

void traverse(){
    if(front==-1 || front>rear){
        printf("Your queue is empty.");
    }
    else{
        printf("Your items.");
    for(i=front;i<=rear;i++){
        printf("\n");
        printf("%d",queue[i]);
    }
    }
}