#include<stdio.h>

void tentimesmore(int *p){
    *p = *p * 10;
}

int main() {

    int n = 6;
    printf("\nThe value of n: %d\n",n);
    tentimesmore(&n);
    printf("\n6 ten time more is: %d\n",n);
    return 0;
}