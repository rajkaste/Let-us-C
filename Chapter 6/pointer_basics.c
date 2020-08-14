#include<stdio.h>

int main() {

    int n = 10;
    int *p = &n; //p will now store the address of n

    // printf("Address of n: %u",&n);
    // printf("\nValue of n: %u",*(&n));

    printf("The value of n is: %d\n",n);
    printf("The value of n is: %d\n",*p);
    printf("The address of n is: %u\n",&n);
    printf("The address of n is: %u\n",p);
    printf("The address of p is: %u\n",&p);
    printf("The value of p is: %u\n",*(&p));

    return 0;
}