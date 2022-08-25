#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n,i=0;

    printf("Type the size :");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int)); //normal memory alocation
    if (ptr==NULL){
        printf("The memory is not alocated.");
    }
    else{
        printf("Type all elements: ");
        for ( i = 0; i < n; i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("All elements: ");
        for (i = 0; i < n; i++)
        {
            printf("%d \t",ptr[i]);
        }
        printf("\n");
    }
    printf("Type a new size:");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int)); //modify the alocated memory
    if (ptr==NULL){
        printf("The memory is not alocated.");
    }
    else{
        printf("The old data with new size."); //print the old data with new memory size.
        for (i=0;i<n;i++){
            printf("%d\t",ptr[i]);
        }
        printf("\nType new data."); //inser some new data in heap.
        for(i=0;i<n;i++){
            scanf("%d",&ptr[i]);
        }
        printf("The new data with new size.");
        for (i=0;i<n;i++){
            printf("%d\t",ptr[i]);  //print the new data.
        }
        printf("\n");
        free(ptr); //free the memory for other work.
    }
    return 0;
}