#include<stdio.h>

int main() {

    int radius, height;
    float area, volume, pi = 3.14;
    printf("Enter the radius of circle: ");
    scanf("%d", &radius);
    area = pi * radius * radius;
    printf("\nThe area of circle which has radius = %d is: %f", radius, area);
    printf("\nEnter the height of this cylinder: ");
    scanf("%d", &height);
    volume = pi * radius * radius * height;
    printf("\nThe volume of this cylinder is: %f ", volume);

    return 0;
}