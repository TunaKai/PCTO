#include <stdio.h>

int main()
{   
    int age;
    
    printf("Input Your Age:\n");
    scanf(" %d", &age);
    if(age >= 18)
    {
        printf("You Are Of Age.\n");
    } else
    {
        printf("You Are Underage.\n");
    }
    return(0);
}
  