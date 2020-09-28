#include<stdio.h>

typedef struct complexNum{
    int real;
    int img;
}Complex;

void display(Complex c){

    printf("\nThe value of Real part: %d",c.real);
    printf("\nThe value of Imaginary part: %d\n",c.img);
   
}

int main() {

    Complex cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Real value for %d num: \n",i+1);
        scanf("%d",&cnums[i].real);
        printf("Enter the Imaginary value for %d num: \n", i + 1);
        scanf("%d", &cnums[i].img);
    }
    for (int i = 0; i < 5; i++)
    {
       display(cnums[i]);
    }
    
    return 0;
}