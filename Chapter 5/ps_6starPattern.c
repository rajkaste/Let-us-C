#include<stdio.h>
void pattern(int);
int main() {

    int n;
    printf("Enter the level for Pattern to print: ");
    scanf("%d",&n);

    pattern(n);

    return 0;
}

void pattern(int n){

    if(n==1){
        printf("*\n");
        return;
    }

    pattern(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }

    printf("\n");

}


// #include<stdio.h>
// int main() {

//     int n;
//     printf("Enter the level for Pattern to print: ");
//     scanf("%d",&n);

//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<=i;j++){
//                 printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
