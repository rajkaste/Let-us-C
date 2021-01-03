#include<stdio.h>


void rotate_to_left(int *arr, int size,int k){

    int save;

    for (int i = 0; i < k; i++)
    {
        save = arr[0];
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = save;
    }
    
    printf("Array after %d rotation(s): ", k);
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
}

int main() {

    int n, arr[n], k;

    printf("Enter how many array elements you want: ");
    scanf("%d",&n);

    printf("Enter the %d elements: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }
    
    printf("Enter the no. of rotation(s) you want: ");
    scanf("%d",&k);

    rotate_to_left(arr,n,k);


    return 0;
}