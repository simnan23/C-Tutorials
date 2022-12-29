#include<stdio.h>
#include<math.h>
int main()
{
    int a = 1;
    int b = 2;
    a = a + b;
    a += b; // means that a = a + b
    printf("%d\n%d",a,a);
    return 0;
}