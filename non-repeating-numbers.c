#include <stdio.h>
int main()
{
    int arr[101], i, j, n, count;
    printf("Enter Number of elements in Array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("\nThe non repeated number are:%d", arr[i]);
        }
    }
}