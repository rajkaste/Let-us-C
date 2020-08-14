#include<stdio.h>

float fan(float cel);

int main() {

    float cel;
    printf("Enter Celcius value: ");
    scanf("%f",&cel);
    printf("The Fahrenheit Temperature for %.2f C: %.3f F",cel,fan(cel));

    return 0;
}

float fan(float cel){

    float temp;
    temp = (cel * 9/5) + 32;
    return temp;
}