#include <stdio.h>

typedef struct person{
    int age;
    long contact;
    char name[20];
}human;

int main()
{

    human raj = {21, 702060, "Raj Kaste"};
    
    printf("\nName 1: %s", raj.name);
    printf("\nAge 1: %d", raj.age);
    printf("\nContact 1: %d\n", raj.contact);

    return 0;
}

