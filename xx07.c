#include <stdio.h>

int main()
{
    int n1;
    int n2;

    printf("Pick A Number:\n");
    scanf(" %d", &n1);
    printf("Pick Another Number:\n");
    scanf(" %d", &n2);
    int AA = n1 % n2;
    
    if(AA == 0) 
    {
        printf("Your Number Is A Multiple\n");
    }
    else
    {
        printf("Your Number Is Not A Multpile\n");
    }
    return(0);







}