// print day using switch(integer) statement
#include<stdio.h>
int main()
{
   int day;
   //print: 1-mon; 2-tues; 3-wed and so on with 1to7 number using switch operator
   printf("enter day(1-7)");
   scanf("%d",&day);

   switch (day) 
   {
    case 1 : printf("monday\n");
             break;
    case 2 : printf("tuesday\n");
             break;
    case 3 : printf("wednesday\n");
             break;
    case 4 : printf("thursday");
             break;
    case 5 : printf("friday");
             break;
    case 6 : printf("saturday");
             break;
    case 7 : printf("sunday");
             break; 
    // default is used as else in switch statement  
    default : printf("not a valid day\n");
    return 0;
   }

}