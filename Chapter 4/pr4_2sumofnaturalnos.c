#include<stdio.h>

int main() {
    int i= 1, sum=0, n;
    printf("\nEnter a number till which you want to print the sum: ");
    scanf("%d", &n);
    // for ( i = 0; i <=n; i++)
    // {
    //     sum += i;
    // }
    while (i<=n)
    {
        sum += i;
        i++;
    }
    // do
    // {
    //     sum += i;
    //     i++;

    // } while (i<=n);
    
    printf("\nThe value of sum(1 to %d): %d\n", n, sum);
    return 0;
}