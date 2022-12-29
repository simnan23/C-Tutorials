#include<stdio.h>
void main()
{
    int a=2,b;
    b= ++a - a--;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
