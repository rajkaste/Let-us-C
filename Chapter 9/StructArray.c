#include<stdio.h>
#include <string.h>
struct employee
{
    int id;
    float sal;
    char name[20];
};
int main() {

    struct employee facebook[100];

    facebook[0].id=101;
    facebook[0].sal=150.5;
    strcpy(facebook[0].name,"Raj Kaste");

    facebook[1].id=102;
    facebook[1].sal=120.5;
    strcpy(facebook[1].name,"Ankit Sharma");

    facebook[2].id=103;
    facebook[2].sal=100.5;
    strcpy(facebook[2].name,"Akash Lohar");

    for (int i = 0; i < 3; i++)
    {
       printf("\nFB %d Id: %d",i+1,facebook[i].id);
       printf("\nFB %d Name: %s\n",i+1,facebook[i].name);
       
    }
    
    return 0;
}

/*
o/p:

FB 1 Id: 101
FB 1 Name: Raj Kaste

FB 2 Id: 102
FB 2 Name: Ankit Sharma

FB 3 Id: 103
FB 3 Name: Akash Lohar

*/