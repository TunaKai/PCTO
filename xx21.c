#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("Choose A Coordinate X\n");
    scanf(" %d", &x);
    printf("Choose A Character Y\n");
    scanf(" %d", &y);
    if (x > 0 && y > 0)
    {
        printf("You Are In The First Quarter\n");
    }else if(x > 0 && y < 0) 
    {
        printf("You Are In The Fourth Quarter\n");
    }else if(x < 0 && y < 0)
    {   
        printf("You Are In The Second Quarter\n");
    }else if (x == 0 && y == 0)
    {
        printf("You Are At O\n");
    }else
    {
        printf("You Are In The Third Quarter\n");
    }
    return(0);
}