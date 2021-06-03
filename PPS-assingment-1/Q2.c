#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number:");
    scanf("%d %d", &a, &b);
    printf("Value of a and b before swapping a=%d b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
}