#include<stdio.h>

int main() {

    int a=10;
    int *ptr;
    ptr = &a;

    printf("The address of a: %u\n",ptr);
    printf("The value of a: %u\n",*ptr);
    

    return 0;
}