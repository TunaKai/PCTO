#include <stdio.h>

int main()

{
    int temp;
    int tempF;
    float tempK;
    printf("Input Your Temperature:");
    scanf(" %d", &temp);
    if (temp <= -273.15)
    {
        printf("Invalid Temperature:");
    }
    else
    {
        temp = (temp / 5) * 9;
        tempF = temp + 32;
        tempK = temp + 273.15;
        printf("Your Temperature In Fahrenheit Is: %d\n", tempF);
        printf("Your Temperature In Kelvin Is: %.2f\n", tempK);
    }
    return (0);
}