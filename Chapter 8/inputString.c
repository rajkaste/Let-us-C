#include<stdio.h>

int main() {

    char s[34];
    printf("Enter your Name: ");
    //scanf("%s",s);
    gets(s);
    // printf("Your name is: %s",s);
    puts(s);
    return 0;
}