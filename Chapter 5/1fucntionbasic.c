#include<stdio.h>

void display();   //Function Prototype
void morning();
void afternoon();
void night();

int main() {
    printf("\nInside main.\n");
    display();    //Function Call
    morning();
    printf("Again inside main.\n");
    return 0;
}

void display() {   //Function Definition
    printf("From here Function Prints:\n");
}
void morning() {
    printf("Good Morning!\n");
    afternoon();    //Function inside Function
}
void afternoon() {
    printf("Good Afternoon!\n");
    night();        //Function inside Function
}
void night() {
    printf("Good Night!\n");
}