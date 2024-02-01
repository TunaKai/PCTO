#include <stdio.h>

int main()
{
    int year;
    int year2;

    printf("Choose A Year:");
    scanf(" %d", &year);
    if (year == 1969)
    {
        printf("You Were Born On The Same Year As The Moon Landing\n");
    }
    else if (year > 1969)
    {
        year2 = year - 1969;
        printf("You Were Born %d Years After The Moon Landing\n", year2);
    }

    else if (year < 1969)
    {
        year2 = 1969 - year;
        printf("You Were Born %d Years Before The Moon Landing\n", year2);
    }

    return (0);
}
