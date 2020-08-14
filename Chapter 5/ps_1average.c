#include<stdio.h>
float avg(int a,int b,int c);

int main() {

    int n1,n2,n3;
    printf("Enter 1st value: ");
    scanf("%d",&n1);
    printf("Enter 2nd value: ");
    scanf("%d",&n2);
    printf("Enter 3rd value: ");
    scanf("%d",&n3);

    printf("The average of %d,%d,%d: %.2f", n1, n2, n3, avg(n1, n2, n3));

    return 0;
}
float avg(int a,int b,int c){
    return (float)(a+b+c)/3;
}