#include<stdio.h>

int main() {

    float principle, rot;
    int years;
    printf("Enter the principle amount: ");
    scanf("%f", &principle);
    printf("\nEnter the rate of interest: ");
    scanf("%f", &rot);
    printf("\nEnter no. of years: ");
    scanf("%d", &years);
    float si = (principle * rot * years)/100;
    printf("\nSimple Interest: %f", si);

    return 0;
}