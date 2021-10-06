#include <stdio.h>
int main()
{
    int n, i, missing;
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
        if (a[i] - i != diff)
        {
            missing = i + diff;
            printf("%d: ", missing);
            missing % 2 == 0 ? printf("Even") : printf("Odd");
            printf("\n");
            diff++;
        }
    }
    return 0;
}