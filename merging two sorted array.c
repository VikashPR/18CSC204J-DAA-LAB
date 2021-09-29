#include <stdio.h>
int main()
{
    int a[1010], b[1010], c[1010], m, n, o, k, temp = 0, i = 0, j = 0;
    printf("Enter the size of the array 1 i.e a[]:");
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    printf("Enter the size of the array 1 i.e b[]:");
    scanf("%d", &n);
    k = m;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        c[k] = b[i];
        k++;
    }
    o = m + n;
    for (i = 0; i < o; i++)
    {
        for (j = i + 1; j < o; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("\n The merged array is:");
    for (i = 0; i < o; i++)
    {
        printf("\n %d \n", c[i]);
    }
}