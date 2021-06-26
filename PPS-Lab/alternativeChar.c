#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char ticketnumber[102];
    bool success = false;
    int i;
    scanf("%s", ticketnumber);
    for (int i = 0; i < strlen(ticketnumber) - 2; i++)
    {
        if (ticketnumber[i] != ticketnumber[i + 2])
        {
            success = false;
        }
    }
    if (ticketnumber[0] == ticketnumber[1])
    {

        success = false;
    }
    else
    {
        success = true;
    }

    if (success == true)
    {
        printf("yes");
    }
    else if (success == false)
    {
        printf("no");
    }
    return 0;
}