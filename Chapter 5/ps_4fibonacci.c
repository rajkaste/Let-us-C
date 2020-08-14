#include<stdio.h>

int fib(int);

int main() {

    int series;
    printf("Enter the length of Fibonacci Series: ");
    scanf("%d",&series);
    printf("Fibonaaci Series:\n");
    for(int i = 0 ; i <series;i++){
        printf("%d\n",fib(i));
    }
    return 0;
}

int fib(int n){
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fib(n-1) + fib(n-2);

}