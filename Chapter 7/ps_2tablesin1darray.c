#include<stdio.h>

int main() {

    int tables[10];
    int n;
    printf("Enter the no. whose table you want: ");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        tables[i] = (n*(i+1));
    }
        printf("Table of %d:\n",n);
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n",n,i+1,tables[i]);
    }
    return 0;
}