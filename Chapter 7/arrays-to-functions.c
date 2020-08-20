#include<stdio.h>

// void printArray(int *ptr,int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is: %d\n",i+1,*(ptr+i));
//     }
    
// }
void printArray(int ptr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is: %d\n",i+1,ptr[i]);
    }
    
}

int main() {

    int arr[]={1,2,3,4,5,6};
    printArray(arr,6);

    return 0;
}