#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    float sal;
    char name[20];
};



int main() {

    struct employee e1;
    struct employee *ptr;

    ptr = &e1;

    //(*ptr).id = 101;
    ptr->id = 101;

    printf("\n%d\n",e1.id); //101


    return 0;
}