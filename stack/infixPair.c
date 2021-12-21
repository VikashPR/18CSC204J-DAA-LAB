#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 50
main()
{
    char stk[max], exp[100];
    int top, i;
    top = -1;
    printf("\nEnter an infix expression ");
    scanf("%s", exp);
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            top++;
            stk[top] = exp[i];
        }
        else if (exp[i] == ')')
        {
            if (stk[top] ==
                '(')
                top--;

            else
            {
                printf("False");
                exit(0);
            }
        }
        else if (exp[i] == ']')
        {
            if (stk[top] == '[')
                top--;
            else
            {
                printf("False");
                exit(0);
            }
        }
        else if (exp[i] == '}')
        {
            if (stk[top] == '{')
                top--;
            else
            {
                printf("False");
                exit(0);
            }
        }
    }
    if (top == -1)
        printf("True");
    else
        printf("False");
    return 0;
}