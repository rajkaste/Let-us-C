#include <iostream>
using namespace std;

int delete_at_end(int *arr, int size)
{

    int deleted = arr[size - 1];
    cout<<"\nDeleted element: "<<deleted;
    size--;
    return size;
}

int delete_at_any_pos(int *arr, int size, int location)
{

    int deleted = arr[location - 1];
    cout<<"\nDeleted element: "<<deleted;
    for (int i = location - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    return size;
}

int main()
{
    int n, arr[n], k;

    cout<<"Enter how many array elements you want: ";
    cin>>n;

    cout<<"Enter the "<<n<<" elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    int choice;

    cout<<"\n1. Delete last element\n2. Delete element from any position\nEnter your choice: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        n = delete_at_end(arr, n);

        cout<<"\nArray elements after deleting last element: ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }

        break;

    case 2:
        cout<<"Enter the array location to delete its element: ";
        cin>>k;

        n = delete_at_any_pos(arr, n, k);

        cout<<"\nArray elements after deleting "<<k<<"th element: ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }

        break;

    default:
       cout<<"Invalid choice!!";
        break;
    }

    return 0;
}
