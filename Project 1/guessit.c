#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    int number,guess,nguessess=1;
    srand(time(0));
    number = rand()%100 + 1; // Generates a random number from 1 to 100
    // printf("The number is %d\n",number);
    // Keep running the loop until is guessed
    do
    {
        printf("\nGuess the number between 1 to 100:\n ");
        scanf("%d",&guess);

        if(guess>number)
            printf("lower number please!\n");
        else if(guess<number)
            printf("higher number please!\n");
        else
            printf("You guessed it in %d attempts.\n",nguessess);
            
    nguessess++;
    } while(guess!=number);
    
    return 0;
}