#include <stdio.h>
#include <math.h>
int main()
{
    int a[1010], i, n, lB, uB, findNum, mid, pos;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the array elements in the sorted order");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the number you want to search in the array:");
    scanf("%d", &findNum);
    lB = 0;
    uB = n - 1;
    mid = floor(lB + uB) / 2;
    while (lB <= uB)
    {
        if (a[mid] == findNum)
        {
            pos = mid;
            break;
        }
        else if (findNum > a[mid])
        {
            lB = mid + 1;
        }
        else if (findNum < a[mid])
        {
            uB = mid;
        }
    }

    printf("\n The position of the element in the array is : %d", pos);
}