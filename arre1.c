// write a program to check if a numberis divisible by 2 or not.
#include<stdio.h>
#include<math.h>
int main() {
    int x;
    printf("enter the number");
    scanf("%d",&x);

    x = x % 2;
    x = x % 2 == 0;
    printf("%d\n%d",x,x);
    return 0;
}