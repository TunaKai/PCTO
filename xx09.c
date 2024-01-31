#include <stdio.h>

int main ()
{
    int n1;
    int n2;
    int n3;


    printf("Pick 3 Numbers\n");
    scanf(" %d", &n1);
    scanf(" %d", &n2);
    scanf(" %d", &n3);
    int AA = n2 - n1;
    int BB = n3 - n2;
    if(AA == BB)
    {
        printf("It Is A Progression\n");
    }
    else
    {   
        printf("It Is Not A Progression\n");

    }
    return(0);
}