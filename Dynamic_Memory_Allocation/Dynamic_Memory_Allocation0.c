#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i;
    int *ptr;
    printf("Type your element size: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if (ptr==NULL){
        printf("The memory is not allocated.");
    }
    else{
        printf("Type your elements:");
        for ( i = 0; i < n; i++)
        {
            scanf("%d",&ptr[i]);
        }

        printf("your all elements :");
        for ( i = 0; i < n; i++)
        {
            printf("%d\n",ptr[i]);
        }
    }
    return 0;
}