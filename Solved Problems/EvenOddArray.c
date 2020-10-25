#include<stdio.h>

int main() {

    int arr[10],even[6],odd[6];
    int i=0,j=0,k=0;
    for(i=0;i<10;i++){
        arr[i]=i+1;
    }
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            even[j] = arr[i];
            j++;
        }
        else{
            odd[k] = arr[i];
            k++;
        }
    }
    printf("\nEven Numbers are:\n");
    for(i=0;i<j;i++){
        printf("%d ",even[i]);
    }
    printf("\nOdd Numbers are:\n");
    for(i=0;i<k;i++){
        printf("%d ",odd[i]);
    }
    return 0;
}
