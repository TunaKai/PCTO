#include <stdio.h>
    
    
    void alpha(int x, int y)
    {   
        if(x > y)
        {
            printf("%d Is Bigger Than %d\n", x ,y);
        }
         else
        {
            printf("%d Is Bigger Than %d\n", y, x);
        }
    }
  
    int main()
    { 
        int x;
        int y;
       
        
        
        printf("Choose A Number\n");
        scanf("%d", &x);
        printf("Choose Another Number\n");
        scanf("%d", &y);
        alpha(x, y);
        




    }