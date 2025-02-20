#include<stdio.h>
int main ()

{
    int  a, b, c, d, e;

    a=10, b=20, c=5, d=15;

    e = ( (float)a/ (b+c))*d ; // Steps = 01... (Before The Variable Mention (float) After Run )

    printf ("%d", e);

}


   // Division Calcluation Error Solution Steps... [2]

   // Steps = 02 ...(All The Variable Mention To "int").......
   // ***( Division(/) ...Variable Only Mention The "float" = DETA TYPE..)
