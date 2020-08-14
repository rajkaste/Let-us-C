#include<stdio.h>

int sum(int);

int main() {

    int n;
    printf("\nEnter a number till which you want to print the sum: ");
    scanf("%d", &n);
    printf("\nSum is: %d\n", sum(n));

    return 0;
}

int sum(int n){

    if (n!=0)
        return  sum(n-1) + n;
    else
        return n;
    
}