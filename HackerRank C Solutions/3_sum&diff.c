#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float n1,n2;

    scanf("%d %d",&a,&b);
    scanf("%f %f",&n1,&n2);
    printf("%d %d\n",a+b,a-b);
    printf("%.1f %.1f",n1+n2,n1-n2);
    
    return 0;
}
