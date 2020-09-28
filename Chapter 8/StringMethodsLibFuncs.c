#include<stdio.h>
#include<string.h>

int main() {

    char *st = "Tanmay";
    int a = strlen(st);
    printf("String Length: %d",a);
    //String Length: 6 (excluding null character)

    char st2[20];
    strcpy(st2,st);
    //strcpy(target,source);
    printf("\n%s",st2);

    strcat(st2,st);
    printf("\n%s", st2);

    char st1[10]= "Hello";
    char *str3 = ", Raj";

    strcat(st1, str3);
    printf("\n%s", st1);

    int v = strcmp(st1,str3);
    printf("\n%d",v);

    return 0;
}

//Ouput:-
// String Length : 6 Tanmay
// TanmayTanmay
// Hello, Raj 
// 1