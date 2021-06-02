#include <stdio.h>
int main()
{
    int rows, i, j, z;
    printf("Enter no. of rows : ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1, z = 1; j <= i; j++, z = z + 2)
            printf("%d ", z);
        printf("\n");
    }
    return 0;
}