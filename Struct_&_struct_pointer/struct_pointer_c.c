#include<stdio.h>

struct name
{
    int id;
    int reg;
};


int main(){
    struct name main_struct;
    struct name *harry;
    harry=&main_struct;

    printf("Type Your id: ");
    scanf("%d",&main_struct.id);
    printf("Type Your reg_number: ");
    scanf("%d",&main_struct.reg);


    printf("%d",harry->id);
    printf("\n%d\n",harry->reg);
    return 0;
}