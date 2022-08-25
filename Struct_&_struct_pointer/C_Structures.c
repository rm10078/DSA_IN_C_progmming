#include<stdio.h>
#include<string.h>
struct mydata
{
    char ochar;
    char name[20];
    char roll[30];
    int reg;
    float overall;
};


int main(){
    struct mydata rajib;
    strcpy(rajib.name,"Rajib");
    strcpy(rajib.roll,"ABC345");
    rajib.reg=1234;
    rajib.ochar='R';
    rajib.overall=56.4;


    printf("\n %s",rajib.name);
    printf("\n %s",rajib.roll);
    printf("\n %d",rajib.reg);
    printf("\n %f",rajib.overall);
    printf("\n %c",rajib.ochar);
    return 0;
}