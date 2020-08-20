#include<stdio.h>

int main() {

    int students = 3;
    int subjects = 5;

    int marks[3][5]; //marks[rows][columns]; 
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("Enter the marks of student %d in subject %d: ",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("The marks of student %d in subject %d: %d\n", i + 1, j + 1,marks[i][j]);

        }
        printf("\n");
    }

    return 0;
}