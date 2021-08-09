#include <stdio.h>
const int A = 2;
const int B = 3;
int main()
{
    int arr1[A][B], arr2[A][B], sum[101][101], i, j;
    printf("Enter the values of arr1\n");
    for (i = 0; i < A; i++)
    {
        for (j = 0; j < B; j++)
        {
            printf("Enter the arr1[%d][%d]:", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the values of arr2\n");
    for (i = 0; i < A; i++)
    {
        for (j = 0; j < B; j++)
        {
            printf("Enter the arr2[%d][%d]:", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < A; i++)
    {
        for (j = 0; j < B; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (i = 0; i < A; i++)
    {
        for (j = 0; j < B; j++)
        {
            printf("%d  ", sum[i][j]);
            if (j == B - 1)
            {
                printf("\n\n");
            }
        }
    }

    return 0;
}