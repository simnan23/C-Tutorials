// wap to check the lucky number by using ternary operator
#include<stdio.h>
int main()
{
    int number,luckynumber = 7;

    printf("enter the number");
    scanf("%d",&number);

    number == luckynumber ? printf("you got the money(cash pe aish)") : printf("better luck next time");
    return 0;
}