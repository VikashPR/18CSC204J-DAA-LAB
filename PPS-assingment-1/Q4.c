#include <stdio.h>
#include <time.h>
int main()
{
    time_t t;
    time(&t);
    printf("\n \nTodays Time:%s\n", ctime(&t));
}