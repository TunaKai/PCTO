
#include <stdio.h>

int main()
{
    int x;
    int y = 2;
    int z = 0;
    

    printf("Choose A Number\n");
    scanf(" %d", &x);
    while(y < x)
    {
        if( x % y == 0 )
        {
            z = z + 1;

        }
        y ++;

    }

        if ( z == 0 )
        {
        printf("Your Number Is A Prime Number\n");
        }
        else
        {
            printf("Your Number Is Not A Prime Number\n");
        }
    return(0);
}