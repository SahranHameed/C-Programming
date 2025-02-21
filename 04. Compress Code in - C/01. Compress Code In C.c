#include<stdio.h>

int add1 ()
{
    int a, b=35;
    a = b + 15 ;
    printf("a=%d\n",a);
}


int add2 ()
{
    int c, d=350;
    c = d + 150 ;
    printf("c=%d\n",c);
}


int add3 ()
{
    int e, f=3500;
    e = f + 1500 ;
    printf("e=%d\n",e);

}

int main()
{
    add1 ();
    add2 ();
    add3 ();

   return 0 ;
}

