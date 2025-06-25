//// Integer & Float & Char Variable With Address ////
#include<stdio.h>
int main()
{
    int i = 0; //bottom
    float f = 4.3; //top
    char c = 'a'; //top 1
    char d = 'b'; //top 2

    printf("int i has value: %d  stored in address: %p\n\n",i, &i);
    printf("float f has value: %f  stored in address: %p\n\n",f, &f);
    printf("char c has value: %c  stored in address: %p\n ",c, &c);
    printf("char d has value: %c  stored in address: %p\n ",d, &d);
    return 0;
}
