#include<stdio.h>

#define max 50
int data[max],si=0,i=0,j=0;;

void bubble_sort(int data[],int si);

int main(){
    printf("Type data size : ");
    scanf("%d",&si);
    printf("Type your data : ");
    for(i=0;i<si;i++){
        scanf("%d",&data[i]);
    }
    bubble_sort(data,si);

    printf("Your value : ");
    for(i=0;i<si;i++){
        printf("\n%d",data[i]);
    }

    return 0;
}

void bubble_sort(int data[],int si){
    for ( j = 0; j < si-1; j++)
    {
    for(i=0;i<si-j-1;i++){
        if(data[i]>data[i+1]){
            int tem=data[i+1];
            data[i+1]=data[i];
            data[i]=tem;
        }
    }
}
}
