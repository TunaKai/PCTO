#include <stdio.h>

int main()
{
    int x = 0;
    char word[100];
    printf("Enter A Word:\n");
    scanf(" %[^\n]%*c", word);

    
    while(word[x] != '\0')
    {
       if(word[x] >= 97 && word[x] <= 122)
        {
            word[x] = word[x] - 32;
        }x++;





    }printf("Your Word Is: %s\n", word);
    return(0);
}