#include<stdio.h>

int sum(int a, int b);

int main() {
    int c = sum(3, 5);
    printf("The value of sum: %d", c);
    return 0;
}

int sum(int a, int b) {
    return a+b;
}