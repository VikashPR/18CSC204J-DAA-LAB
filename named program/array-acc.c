#include <stdio.h>
int main()
{
    int sno[101], i, j, null, cell, pin;
    char name[10], city[10];
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &cell);
        scanf("%d", &pin);
        scanf("%s", name);
        scanf("%s", city);
        scanf("%d", &sno[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (sno[i] > sno[j])
            {
                null = sno[i];
                sno[i] = sno[j];
                sno[j] = null;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d", cell);
        printf("%d", pin);
        printf("%s", name);
        printf("%s", city);
        printf("%d ", sno[i]);
    }
}