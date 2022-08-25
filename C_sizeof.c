#include<stdio.h>

int main(){
    int a=10;
    float b=58.3;
    long c=6785743;
    char d='a';
    printf("%lu\n",sizeof(a));  //4 bytes
    printf("%lu\n",sizeof(b));  //4 bytes
    printf("%lu\n",sizeof(c));  //8 bytes
    printf("%lu\n",sizeof(d));  //1 bytes

    return 0;
}