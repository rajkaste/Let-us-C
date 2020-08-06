#include<stdio.h>

int main() {

    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if(year%4 == 0)
        printf("Year entered is a Leap year.");
    else
        printf("Year entered is not a Leap year.");

    return 0;
}