#include<stdio.h>

int main() {

    int i = 10;
    int *ptr;
    int **ptr2;

    ptr = &i;
    ptr2 = &ptr;


    printf("\nThe value of i: %d\n",**ptr2);


    return 0;
}