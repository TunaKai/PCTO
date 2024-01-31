#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    float z = 0;

    while(x >= 0)
    {
        printf("Pick A Number\n");
        scanf(" %d", &x);
        if(x > 0)
        {
            y = y + 1;
            z = z + x;
            
        }    
    }
    
    z = z / y;
    printf("Your Media Is %.1f\n", z);

    return(0);
    }   
    
