#include<stdio.h>

int x = 1000 ; // This Variable Use In.. All The Function. ( Gloabal Variable )

int add1 ()
{
    int a, b=35;
    a = b + x ;
    printf("a=%d\n",a);
}

int add2 ()
{
    int c, d=350;
    c = d + x ;
    printf("c=%d\n",c);
}

int add3 ()
{
    int e, f=3500;
    e = f + x ;
    printf("e=%d\n",e);

}

int main()
{
    add1 ();
    add2 ();
    add3 ();

   return 0 ;
}


//// Auto Variables ////
/*#include<stdio.h>
void fun ()

{
    int y = 0;
    y = y + 1 ;
    printf("y = %d\n",y);
}

int main ()

{
    fun ();
    fun ();
    fun ();
}*/
