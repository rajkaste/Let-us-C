#include<stdio.h>

struct person
{
    int age;
    long contact;
    char name[20];
};

void show(struct person emp)
{
    printf("\nName 2: %s", emp.name);
    printf("\nAge 2: %d", emp.age);
    printf("\nContact 2: %d\n", emp.contact);
    emp.age = 30; //(value dosen't change)
}

int main() {

    struct person raj = {21,702060,"Raj Kaste"};
    struct person ankit = {22,803070,"Ankit Sharma"};

    printf("\nName 1: %s",raj.name);
    printf("\nAge 1: %d",raj.age);
    printf("\nContact 1: %d\n",raj.contact);


    show(ankit);
    printf("\nAge 2: %d", ankit.age); //22 (struct operates on copy of the value not actual value)

    // printf("\nName 2: %s",ankit.name);
    // printf("\nAge 2: %d",ankit.age);
    // printf("\nContact 2: %d\n",ankit.contact);
    

    return 0;
}

/*
op:
Name 1: Raj Kaste
Age 1: 21
Contact 1: 702060

Name 2: Ankit Sharma
Age 2: 22
Contact 2: 803070

*/