//// Pointers * //// ( Base On The Address )

#include<stdio.h>
int main()
{
    int i = 10;
    printf(" int i has value is %d \n",i);
    printf(" int i stored in address: %p\n",&i);

    int *t = &i;
    printf(" \n int *t has value is %p\n",t);
    printf(" int *t stored in address: %p\n",&t);
    printf(" int *t stored in address: %d\n",*t);
    return 0;
}
