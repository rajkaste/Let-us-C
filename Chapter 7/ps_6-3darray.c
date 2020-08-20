#include <stdio.h>

int main()
{

    int arr[2][3][4];

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            for (int k = 0; k < 4; k++)
            {
                printf("The address of arr[%d][%d][%d]: %u\n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}

// op : 
// The address of arr[0][0][0] : 6422116 
// The address of arr[0][0][1] : 6422120 
// The address of arr[0][0][2] : 6422124 
// The address of arr[0][0][3] : 6422128 
// The address of arr[0][1][0] : 6422132 
// The address of arr[0][1][1] : 6422136 
// The address of arr[0][1][2] : 6422140 
// The address of arr[0][1][3] : 6422144 
// The address of arr[0][2][0] : 6422148 
// The address of arr[0][2][1] : 6422152 
// The address of arr[0][2][2] : 6422156 
// The address of arr[0][2][3] : 6422160 
// The address of arr[1][0][0] : 6422164 
// The address of arr[1][0][1] : 6422168 
// The address of arr[1][0][2] : 6422172 
// The address of arr[1][0][3] : 6422176 
// The address of arr[1][1][0] : 6422180 
// The address of arr[1][1][1] : 6422184 
// The address of arr[1][1][2] : 6422188 
// The address of arr[1][1][3] : 6422192 
// The address of arr[1][2][0] : 6422196 
// The address of arr[1][2][1] : 6422200 
// The address of arr[1][2][2] : 6422204 
// The address of arr[1][2][3] : 6422208