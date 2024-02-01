#include <stdio.h>

int main()
{
    int year;

    printf("Choose A Year:");
    scanf(" %d", &year);
    if ((year % 4 == 0 && year % 100) != 0 || year % 400 == 0)
    {
        printf("%d Is A Leap Year\n", year);
    }
    else
    {
        printf("%d Is Not A Leap Year\n", year);
    }

    return (0);
}