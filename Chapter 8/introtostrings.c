#include<stdio.h>

int main() {

    //char str[] = {'T','a','n','m','a','y','\0'};
    //char str[] = "Tanmay";

    char *ptr = "Tanmay Kaste"; //(char [13])"Tanmay Kaste"
    printf("%s",ptr);


    // int size = sizeof(str);
    // printf("%d\n",size);
    //output: 7 
    //(including null character '\0')

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%c",str[i]);
    // }

    // char *ptr = str;
    // while (*ptr!='\0')
    // {
    //     printf("%c",*ptr);
    //     ptr++;
    // }
    
    return 0;
}