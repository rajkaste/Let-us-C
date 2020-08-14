#include<stdio.h>

void sumAndAvg(int a,int b, int *sum,float *avg){
    *sum = a + b;
    *avg = (float)*sum/2;
}

int main() {

    int i= 3, j=6, sum;
    float avg;
    sumAndAvg(i,j, &sum,&avg);
    printf("\nThe value of sum: %d\n",sum);
    printf("\nThe value of avg: %.2f\n",avg);

    return 0;
}