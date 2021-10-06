#include <stdio.h>
int main()
{
    int n, i, j, missing, sum = 0;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n - 1];
    printf("\n Enter the array elements one by one:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int diff = a[0] - 0;

    for (int i = 0; i < n; i++)
    {
        // if (a[i] - i != diff)
        // {
        //     while (diff < a[i] - i)
        //     {
        //         printf("%d ", i + diff);
        //         diff++;
        //     }
        // }
        if (a[i] - i != diff)
        {
            printf("%d ", i + diff);
            diff++;
        }
    }
    return 0;
}