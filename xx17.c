#include <stdio.h>

int main()
{

    int n1 = 5;
    int n2;
    int n3;
    float n4;
    int n5;
    
  
    while(n2 >= 0)
    {   
        printf("How Many Articles Do You Want?\n");
        scanf("%d", &n2);
        int n3 = n2 * n1;
        if(n2 >= 30 && n2 < 50)
        {
            n4 = n3 * 0.9;
            

            printf("Your Total Is %.2f\n", n4);
        }
            else if(n2 >= 50)
        {
                n4 = n3 * 0.85;
                
                printf("Your Total Is %.2f\n", n4);
        }
            else if (n2 > 0)
        {
                printf("Your Total Is %d\n", n3);
        }   
        }   printf("Invalid Number\n");
      
      return(0);
    }
   






































