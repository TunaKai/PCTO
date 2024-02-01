#include  <stdio.h>

    

   int main(){

    int x;
    int y;
    int z;
    int A1;
    float temp, sqrt;
    int A2;
    int x1;
    int y1;
    int z1;

    
    


    printf("Choose A Number\n");
    scanf(" %d", &x);
    printf("Choose A Number\n");
    scanf(" %d", &y);
    printf("Choose A Number\n");
    scanf(" %d", &z);
    int p = x + y +z;
    if(x + y > z && y + z > x && z + x > y){
    printf("The Perimeter Of Your Triangle Is: %d\n", p); 
    
    A1 = p /2;
    x1 = A1 - x;
    y1 = A1 - y;
    z1 = A1 - z;
    A2 = A1 * x1 * y1 * z1;
    sqrt = A2 / 2;
    temp = 0;
    while(sqrt != temp){
        
        temp = sqrt;

       
        sqrt = ( A2 / temp + temp) / 2;
    }

    printf("The Area Of Your Triangle Is: %.3f\n", sqrt);
    } else
    {
        printf("It Is Not A Triangle\n");
    }
    return(0);
}