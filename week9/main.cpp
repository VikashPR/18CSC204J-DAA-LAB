#include <stdio.h>
#include <stdlib.h> #define max 101 int main()
{
    int a[101], t, i, j, count, n, sum;
    scanf("%d", &t);
    while (t > 0)
    {
        char flag[10009] = {};
        sum = 0;
        count = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
            sum += a[i];
        flag[0] = 1;
        for (i = 0; i < n; i++)
            for (j = sum; j >= a[i]; j--)
                if (flag[j - a[i]] == 1)
                    flag[j] = 1;
        for (i = 0; i <= sum; i++)
        {
            if (flag[i] == 1)
                count++;
        }

        printf("%d\n", count);
        t--;
    }
    return 0;
}