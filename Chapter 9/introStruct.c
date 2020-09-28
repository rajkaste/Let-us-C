#include<stdio.h>
#include<string.h>

struct employee{
    int id;
    float sal;
    char name[20];
}e1,e2,e3;

int main() {

    //struct employee e1;
    // e1.id=101;
    //.(dot) = Member Operator
    // e1.sal=150.5;
    // strcpy(e1.name,"Raj Kaste");

    // printf("%d",e1.id);
    // printf("\n%.2f",e1.sal);
    // printf("\n%s",e1.name);

    printf("Enter Employee 1 Id: ");
    scanf("%d",&e1.id);
    printf("Enter Employee 1 Name: ");
    scanf("%s", e1.name);
    printf("Enter Employee 1 Salary: ");
    scanf("%f",&e1.sal);

    printf("Enter Employee 2 Id: ");
    scanf("%d",&e2.id);
    printf("Enter Employee 2 Name: ");
    scanf("%s", e2.name);
    printf("Enter Employee 2 Salary: ");
    scanf("%f",&e2.sal);

    printf("Enter Employee 3 Id: ");
    scanf("%d",&e3.id);
    printf("Enter Employee 3 Name: ");
    scanf("%s", e3.name);
    printf("Enter Employee 3 Salary: ");
    scanf("%f",&e3.sal);

    printf("\n+-------------+----------------+-------------+\n");
    printf("|     ID      |      Name      |    Salary   |\n");
    printf("+-------------+----------------+-------------+\n");
    printf("|     %d     |       %s      |     %.2f   |\n",e1.id,e1.name,e1.sal);
    printf("+-------------+----------------+-------------+\n");
    printf("|     %d     |       %s    |     %.2f   |\n",e2.id,e2.name,e2.sal);
    printf("+-------------+----------------+-------------+\n");
    printf("|     %d     |       %s     |     %.2f   |\n",e3.id,e3.name,e3.sal);
    printf("+-------------+----------------+-------------+\n");

    return 0;
}

/*
o/p:

Enter Employee 1 Id: 101
Enter Employee 1 Name: Raj
Enter Employee 1 Salary: 15.5
Enter Employee 2 Id: 102
Enter Employee 2 Name: Ankit
Enter Employee 2 Salary: 14.12
Enter Employee 3 Id: 103
Enter Employee 3 Name: Amin
Enter Employee 3 Salary: 14

+-------------+----------------+-------------+
|     ID      |      Name      |    Salary   |
+-------------+----------------+-------------+
|     101     |       Raj      |     15.50   |
+-------------+----------------+-------------+
|     102     |       Ankit    |     14.12   |
+-------------+----------------+-------------+
|     103     |       Amin     |     14.00   |
+-------------+----------------+-------------+

*/