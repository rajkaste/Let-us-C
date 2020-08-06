#include<stdio.h>

int main() {

    int rating;
    printf("Enter your rating(1 to 5):\n");
    scanf("%d",&rating);

    switch (rating)
    {
    case 1:
        printf("You rating is 1.");
        break;
    case 2:
        printf("You rating is 2.");
        break;
    case 3:
        printf("You rating is 3.");
        break;
    case 4:
        printf("You rating is 4.");
        break;
    case 5:
        printf("You rating is 5.");
        break;
    
    default:
        printf("Invalid rating..");
        break;
    }

    return 0;
}