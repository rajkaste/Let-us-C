#include<stdio.h>


void tableMatrix(int *tables,int num,int level){

    for (int i = 0; i < level; i++)
    {
        tables[i] = num *(i+1); 
    }
    
    for (int i = 0; i < level; i++)
    {
            printf("%d\t",tables[i]);        
    }
    printf("\n");
}

int main() {

    int tables[3][10];

    tableMatrix(tables[0],2,10);
    tableMatrix(tables[1],7,10);
    tableMatrix(tables[2],9,10);

   
        printf("\n%d",tables[1][5]);
   

    return 0;
}