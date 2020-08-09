#include<stdio.h>

int main() {

    int num,mul,sum=0;
    printf("\nWhich table you want: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        mul = num * i;
       
        printf("%d x %d = %d\n", num, i, mul);
        sum += mul;
    }

    printf("\nSum of all the numbers: %d\n",sum);

    return 0;
}