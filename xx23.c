#include <stdio.h>

void alpha(int x)
{
    int even = x % 2;
    if(even != 1)
    {
        printf("Your Number Is Even\n");
    }else
    {
        printf("Your Number Is Odd\n");
    }



}









int main()
{
    int x;

    printf("Choose A Number\n");
    scanf(" %d", &x);
    alpha(x);






}