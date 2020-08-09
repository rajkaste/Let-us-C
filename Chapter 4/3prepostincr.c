#include<stdio.h>

int main() {

    int i =5;
    printf("Increment:\nthe value of i is: %d\n", i);
    printf("the value after i++ is: %d\n", i++);
    //1st print then increment
    printf("the value of i is: %d\n",i);
    printf("the value after ++i is: %d\n",++i);
    //1st increment then print
    printf("the value of i is: %d\n",i);
    int k =5;
    printf("\nDecrement:\nthe value of i is: %d\n", k);
    printf("the value after i-- is: %d\n", k--);
    //1st print then decrement
    printf("the value of i is: %d\n",k);
    printf("the value after --i is: %d\n",--k);
    //1st decrement then print
    printf("the value of i is: %d",k);

    return 0;
}