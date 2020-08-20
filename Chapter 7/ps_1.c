#include<stdio.h>

int main() {

    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("\nThese point to the Same Address\n");
    }
    else
    {
        printf("\nThese doesn't point to the Same Address\n");
    }

    return 0;
}