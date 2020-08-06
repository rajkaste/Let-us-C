#include<stdio.h>

int main() {

    int a,b,c,d;
    printf("Enter 4 numbers: \n");
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d)
        printf("A is greatest");
        
    if(b>a && b>c && b>d)
        printf("B is greatest");

    if(c>a && c>b && c>d)
        printf("C is greatest");

    else
        printf("D is greatest");
    return 0;
}