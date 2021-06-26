#include <stdio.h>
#include <string.h>
int main()
{
    int ans, l, t, i, c1, c2;
    char s[1001], c;
    scanf("%d", &t);
    while (t--)
    {
        ans = 1;
        scanf("%s", s);
        char s1[1001], s2[1001];
        l = strlen(s);
        c1 = c2 = 0;
        for (i = 0; i < l / 2; i++)
            s1[c1++] = s[i];
        if (l % 2 == 1)
            i = l / 2 + 1;
        else
            i = l / 2;
        for (; i < l; i++)
            s2[c2++] = s[i];
        s1[c1] = '\0';
        s2[c2] = '\0';
        int ar1[26], ar2[26];
        memset(ar1, 0, 26 * sizeof(int));
        memset(ar2, 0, 26 * sizeof(int));
        for (i = 0; i < c1; i++)
        {
            c = s1[i];
            ar1[(int)c - 97]++;
        }
        for (i = 0; i < c2; i++)
        {
            c = s2[i];
            ar2[(int)c - 97]++;
        }
        for (i = 0; i < 26; i++)
        {
            if (ar1[i] != ar2[i])
            {
                ans = 0;
                break;
            }
        }
        if (ans == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}