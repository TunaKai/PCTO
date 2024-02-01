
#include <stdio.h>

int alpha(int x)
{
    int xsave;
    xsave = x;
    x = x -1;
    while(x > 0)
    {
    
        xsave = xsave * x;
        x = x - 1;
        
       


    }
    return(xsave);





}











int main()
{
    int x;
    printf("Choose A Number\n");
    scanf(" %d", &x);
    printf("Answer: %d\n", alpha(x));




}