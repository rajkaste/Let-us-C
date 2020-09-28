#include<stdio.h>

void occurence(char st[],char c){
    char *ptr = st;
    int count=0;
    while (*ptr!='\0')
    {
        if(*ptr==c){
            count++;
        }
        ptr++;
    }
    if (count!=0){
        printf("Character %c is present in the string.", c);
    }
    else
    {
        printf("Charater %c not present in the string.",c);
    }
    
    
}

int main() {

    char str[] = "Tanmay";
    // int count = occurence(str,'a');
    // printf("%d",count);
    occurence(str, 'k');
    return 0;
}