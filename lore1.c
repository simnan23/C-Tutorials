// Print 1(true) or 0(false) for following statements.
#include<stdio.h>
int main() 
{
   {
    int isSunday = 1;
    int isSnowing = 1; 
    printf("%d\n",isSunday && isSnowing);
   } 
    {
     int isMonday = 0;
     int isRaining = 1;
     printf("%d\n",isMonday || isRaining);
    }
    {
     int x;
     printf("enter the number");
     scanf("%d",&x);
     printf("%d\n",x>5 && x<33);   
    }
    {
    {
    // true false for a two digit number
     int x;
     printf("enter the number");
     scanf("%d",&x);
     printf("%d\n",x>9 && x<100);   
    }
    }
    return 0;

}