#include<stdio.h>
int sqr (int x) //Local Variable & Parameter

{
    int sq ;
    sq = x * x ;
    return sq ;
}

int main ()
{
    int n ;
    printf("Enter The Input :");
    scanf("%d",&n);
    printf("Square Of :%d",sqr(n));

    return 0 ;
}
