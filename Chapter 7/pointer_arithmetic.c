#include<stdio.h>

int main() {

    int i =34;
    int *ptr = &i;
    int *ptr1 = ptr + 2;

    printf("The value of ptr is: %u\n",ptr);
    printf("The value of ptr1 is: %u\n",ptr1);
   
    printf("The diff is: %u\n",ptr1 - ptr);

    return 0;
}

// op :
// The value of ptr is : 6422212 
// The value of ptr1 is : 6422220 
// The diff is : 2