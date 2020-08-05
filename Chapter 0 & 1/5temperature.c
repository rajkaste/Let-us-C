#include<stdio.h>

int main(){

    int celcsius;
    float fanh;

    printf("Enter Celcius: ");
    scanf("%d",&celcsius);

    fanh = (celcsius * 9/5) + 32;

    printf("Fahrenheit: %f F",fanh);

return 0;
}