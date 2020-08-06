#include<stdio.h>

int main() {

    int maths, chem, phys;
    printf("Enter Maths Marks:\n");
    scanf("%d",&maths);
    printf("Enter Chemistry Marks:\n");
    scanf("%d",&chem);
    printf("Enter Physics Marks:\n");
    scanf("%d",&phys);

    float total = (maths + chem + phys)/3;
    if((total < 40) || maths<33 || chem<33 || phys<33){
        printf("Your total percentage is %f and you are failed.",total);
    }
    else
    {
        printf("Your total percentage is %f and you are Passed.", total);
    }
    
    return 0;
}