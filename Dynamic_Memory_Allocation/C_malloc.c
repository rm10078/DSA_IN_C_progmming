#include <stdio.h>
#include <stdlib.h> //malloc,realloc,free,calloc inside this libarary

int main()
{
    int n, i = 0;
    int *ptr;
    printf("Type size : ");
    scanf("%d", &n);
    ptr = (int*)malloc(n*sizeof(int)); //alocat some memory for store data
    if (ptr == NULL)    //Check the the memory alocated or not.
    {
        printf("Memory is not alocated.");
        exit(0);
    }
    else
    {
        printf("Type all elements: "); //Insert some value in alocated memory.
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]);
        }
        printf("All elements....\n"); //print all value from the memory.
        for (i = 0; i < n; i++)
        {
            printf("%d\n", ptr[i]);
        }
        free(ptr); //Free the memory.
    }

    return 0;
}