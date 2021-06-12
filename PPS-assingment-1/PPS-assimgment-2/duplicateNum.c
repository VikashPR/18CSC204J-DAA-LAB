#include <stdio.h>
int main()
{
    int i, numArr[101], j, n, count;
    printf("\n Enter Array Length: ");
    scanf("%d", &n);
    printf("Enter the number array \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numArr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (numArr[i] == numArr[j])
                printf("Numeber of repeated %d\n", numArr[i]);
        }
    }
}