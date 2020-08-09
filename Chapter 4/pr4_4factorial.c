#include<stdio.h>

int main() {

    int num,i=1,fact = 1;
    printf("\nWhich number's factorial you want: ");
    scanf("%d",&num);

    for( i; i<=num; i++){
         
        fact *= i;
    }
    // while (i<=num)
    // {
    //     fact *= i;
    //     i++;
    // }
    printf("\nFactorial: %d\n",fact);

    return 0;
}