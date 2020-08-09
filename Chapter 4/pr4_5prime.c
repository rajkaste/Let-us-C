#include<stdio.h>

int main() {

    int num,i,prime=1;
    printf("\nEnter a number to check whether it is prime or not: ");
    scanf("%d",&num);
    for(i = 2; i<num;i++){
        if(num%i==0){
            prime=0;
            break;
        }
    }
    if (prime==0)
    {
            printf("Not a prime number");
      
    }
    else
    {
            printf("Prime number");
    }
    return 0;
}