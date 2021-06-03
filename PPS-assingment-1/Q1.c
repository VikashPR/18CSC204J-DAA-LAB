#include <stdio.h>
int main()
{
    int num1, num2, add, sub, i;
    printf("Enter the two numbers:");
    scanf("%d %d", &num1, &num2);
    add = num1;
    for (i = 0; i < num2; i++)
    {
        add++;
    }
    printf("Sum of num1 and num2:%d\n", add);
    sub = num1;
    for (i = 0; i < num2; i++)
    {
        sub--;
    }
    printf("The sub value:%d\n", sub);
}