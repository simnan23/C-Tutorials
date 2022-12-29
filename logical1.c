#include<stdio.h>
#include<math.h>
int main()
{
    // logical AND operator
    printf("%d\n",3>4 && 4>4);
    printf("%d\n",3<4 && 4>=4);

    //logical OR operator
    printf("%d\n",4==4 || 4>4);
    printf("%d\n",3>4 || 4>=3);
    printf("%d\n",3>4 || 3>=4);
    
    //logical NOT operator
    printf("%d\n",!(3>4 && 4>4));
    printf("%d\n",!(3>4 || 4>=4));
    printf("%d\n",!(3>4) || !(4>4));

    return 0;
    }