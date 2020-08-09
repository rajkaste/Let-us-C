#include<stdio.h>

int main() {

    int i =1;
    do{
        printf("The value of i is %d\n",i);
        if(i==6){
             break;
        }
        i++;
    }while(i<=10);

    return 0;
}