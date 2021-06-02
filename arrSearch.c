#include <stdio.h>
int main()
{
    int arr[101] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, search = 6, index;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == search)
        {
            printf("%d\n", i);
        }
    }
}