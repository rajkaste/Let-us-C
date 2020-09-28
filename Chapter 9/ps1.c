#include<stdio.h>

typedef struct vector
{
    int x,y;
}Vector;

Vector sumVector(Vector v1, Vector v2)
{
    Vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;
}

int main() {

    Vector v1,v2,sum;

    v1.x = 3;
    v1.y = 4;
    printf("\nX dim is %d and Y dim is %d\n",v1.x,v1.y);
    v2.x = 5;
    v2.y = 2;
    printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);

    sum = sumVector(v1,v2);
    printf("X dim result is %d and Y dim result is %d\n",sum.x,sum.y);


    return 0;
}