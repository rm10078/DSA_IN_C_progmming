#include<stdio.h>
#define max 10
int queue[max];
int front=-1,rear=-1,item=0,data=0;

void insert();
void delete();
void traverse();

int main(){
    int choise=0,wv=1;
    while (wv)
    {
    printf("For Insert press = 1\nFor delete press = 2\nFor traverse pree = 3\nFor exit press = 4");
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
    if(rear==max){
        printf("Queue is full.");
    }
    else{
        printf("Enter your data : ");
        scanf("%d",&data);
        rear++;
        queue[rear]=data;
        if(front==-1){
            front++;
        }
    }
}

void delete(){
    if(front==-1 || front>rear){
        printf("Your queue is empty.");
    }
    else{
        front++;
        printf("deleted.....");
    }
}

void traverse(){
    if(front==-1 || front>rear){
        printf("Your queue is empty.");
    }
    else{
        printf("Your items :");
    for(int i=front;i<=rear;i++){
        printf("\n");
        printf("%d",queue[i]);
    }
    }
}