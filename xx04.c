#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int result;
    char myChar;

    printf("Pick A Number:");
    scanf(" %d", &n1);

    printf("Pick A Character:");
    scanf(" %c", &myChar);

    printf("Pick A Number:");
    scanf(" %d", &n2);
    
     if (myChar == '+')
    {
        result = n1 + n2;
        printf("Your Answer: %d\n", result);
    }
    else if (myChar == '-')
    {
        result = n1 - n2;
        printf("Your Answer: %d\n", result);
    }
    else if (myChar == '*')
    {
        result = n1 * n2;
        printf("Your Answer: %d\n", result);
    }
    else if (myChar == '/')
    {
        result = n1 / n2;
        printf("Your Answer: %d\n", result);
    }  else{
        printf("Incorrect Character\n");
    }
    return (0);
}