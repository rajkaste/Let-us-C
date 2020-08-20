#include<stdio.h>

int count(int *arr,int n){
    int ctr=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0 || arr[i]==0){
            continue;
        }else
        {
            ctr++;
        }
        
    }
    return ctr;
}

int main() {

    int arr[5];

    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int c = count(arr,5);

    printf("No. of +ve integers in the given array: %d",c);
    return 0;
}

// op : 
// Enter 5 elements : 
// 1 
// -2
// 6 
// -3 
// 5 
// No.of + ve integers in the given array : 3