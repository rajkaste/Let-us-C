#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    char s[20];
    scanf("%s", s);
    char sen[100];
    scanf("\n%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);

    return 0;
}