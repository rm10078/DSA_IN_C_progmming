#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0;
    int *ptr;
    printf("Type size : ");
    scanf("%d", &n);
    ptr = (int*)calloc(n,sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory is not alocated.");
        exit(0);
    }
    else
    {
        printf("Type all elements: ");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]);
        }
        printf("All elements....\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", ptr[i]);
        }
        free(ptr);
    }

    return 0;
}