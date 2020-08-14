#include<stdio.h>

void printAdd(int a){

    printf("The address of a: %u\n",&a);
}

int main() {

    int i=4;
    printf("\nThe value of i: %d\n",i);
    printAdd(i);
    printf("The address of i: %u\n",&i);

    return 0;
}