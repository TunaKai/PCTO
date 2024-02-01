#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z = 0;
    printf("Choose A Number:\n");
    scanf(" %d", &x);
    while (x >= 0 && z < 10)
    {
        y = ((double)rand() / RAND_MAX) * (10 - 0) + 0;
        if (x == y)
        {
            z = z + 1;
            printf("You Win!\n");
            printf("+1!\n");
        }
        else
        {
            printf("You Lose! The Number Was: %d\n", y);
        }
        printf("Choose Another Number:\n");
        scanf(" %d", &x);
    }
    printf("Your Points: %d\n", z);
}