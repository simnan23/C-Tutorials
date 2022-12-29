// Write a program to check if a number is odd or even.
#include<stdio.h>
int main() {
    //even(then print 1)
    //odd (then print 0)
    int x;
    printf("enter the number");
    scanf("%d",&x);
    x = x % 2 == 0;
    printf("%d",x);
    return 0;
}