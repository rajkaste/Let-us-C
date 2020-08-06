#include<stdio.h>

int main(){

    int age;
    printf("Enter your age: \n");
    scanf("%d",&age);

    if (age <= 70 && age >= 18){
        printf("You are above 18 and below 70, you can drive.");
    }
    else
    {
        printf("You cannot drive.");
    }
    

return 0;
}