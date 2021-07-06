#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);
    int z = 0;
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n], b[m];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < m; i++)
        {
            scanf("%d", &b[i]);
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (b[j] == a[i])
                {
                    printf("%d ", a[i]);
                    z = 1;
                }
            }
        }
    }
    if (z == 0)
    {
        printf("Zero");
    }
    return 0;
}