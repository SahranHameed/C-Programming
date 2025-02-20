#include<stdio.h>
int main ()

{
    /////Increment Operators/////

    int x = 10;
    printf("x = %d\n\n", x);     // 1st Output In X

    printf("++x = %d\n", ++x); // Pre Increment Assign
    printf("x = %d\n", x);     // Pre Increment Output Answer

    printf("x++ = %d\n", x++); // Post Increment Assign
    printf("x = %d\n\n", x);     // Post Increment Output Answer



    /////Decrement Operators/////

    printf("--x = %d\n", --x); // Pre Decrement Assign
    printf("x = %d\n", x);     // Pre Decrement Output Answer

    printf("x-- = %d\n", x--); // Post Decrement Assign
    printf("x = %d\n", x);     // Post Decrement Output Answer


}
