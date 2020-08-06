#include<stdio.h>

int main() {

    char ch;
    printf("Enter the charcter: \n");
    scanf("%c",&ch);

    if(ch >= 97 && ch <= 122 )
        printf("Character entered is in Lowercase.");
    else
        printf("Character entered is not in Lowercase.");
    return 0;
}