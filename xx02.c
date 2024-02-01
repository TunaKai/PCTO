#include <stdio.h>

int main()
{  
    int n1 = 4;
    int n2 = 6;
    int n3 = 12;
    int n4 = 5;
    int AA = n1 * n2;
    int BB = n3 / n2; 
    int CC = n1 - n1;
    int DD = n3 + n2;
    int EE = n3 % n4;
    printf("Your Answer Is: %d\n", AA);
    printf("The Answer To Your Equation Is: %d\n", BB);
    printf("Your Number is: %d\n", CC);
    printf("This Equation Is Equal To: %d\n", DD);
    printf("Your Answer Is Equal To: %d\n", EE);
    return(0);
}