#include <stdio.h>

void alpha()
{   
    char x;
    printf("Choose A Character\n");
    scanf("%c", &x);
    if((x >= 97 && x <= 122) || x >= 65 && x <= 90){
    if (x == 'a' || x == 'e' || x == 'i' || x== 'o' || x =='u')
    {
        printf("Your Character Is A Vowel\n");
    }else
    {
        printf("Your Character Is A Consonant\n");
    }
    



    }else
    {
        printf("Invalid Character\n");
    }
}


int main()  
{
    alpha();

    return(0);
}