#include <stdio.h>
int main()
{
    int i, j, a[1010], sE, eE, n, temp = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                a[i] = temp;
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    sE = a[0];
    eE = a[n];
    for (i = sE; i < eE - 1; i++)
    {
        if (a[i] == i)
        {
            printf("\n");
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}