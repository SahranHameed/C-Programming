//////////////////////// Static Variables = [ Already Declear Variable In Data : After F.Call Every Time New Data Auto Update ]
#include<stdio.h>
void fun ()

{
    static int y = 0;
    y = y + 1 ;
    printf("y = %d\n",y);
}

int main ()

{
    fun ();
    fun ();
    fun ();
}

//////////////////////// Auto Variables  = [ Already Declear Variable In Data : After F.Call Again & Again Every Time Show Old Data ]
#include<stdio.h>
//void fun ()

//{
    int y = 0;
//    y = y + 1 ;
//    printf("y = %d\n",y);
//}

//int main ()

//{
//    fun ();
//    fun ();
//    fun ();
//}
