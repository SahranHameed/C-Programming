#include<stdio.h>
int main()

{
    int x , y ;
    for(x=1;x<=5;x++) // Perent Condition
        printf("*",x);
    {
        for(y=1;y<=2;y++) // Child Condition
        {
            //printf("x =%d\ny = %d\n\n",x , y);
            //printf("x * y = %d\n",x * y);
            //printf("*",x);
            printf("*",y);
        }
    }
}
