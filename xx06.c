#include <stdio.h>

int main()

{   
    int agereq;
    int age;
    
    printf("What Age Can You Get Your License In Your State?\n");
    scanf(" %d", &agereq);
    printf("How Old Are You?\n");
    scanf(" %d", &age);
    if(age >= agereq)
    {
        printf("You Can Get Your License.\n");
    } else{
        printf("You Can't Get Your License.\n");    
    }
    return(0);
}