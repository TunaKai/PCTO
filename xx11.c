#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    printf("Choose 3 Numbers\n");
    scanf(" %d", &n1);
    scanf(" %d", &n2);
    scanf(" %d", &n3);
    if(n1 + n2 > n3 && n2 + n3 > n1 && n3 + n1 > n2)
    {
        printf("It Is A Triangle\n");
    }else
    {
        printf("It Is Not A Triangle\n");
    }





    return(0);
}