//// Integer Array With Address ////
#include<stdio.h>
int main()

{
    int a[]={1,2,3};
    int b[3]={4,5,6};
    int c[3]={7,8,9};
    int d[3]={10,11,12};

    for(int i=0; i<3; i++)
    {
        printf("a[%d] = %d Stored at %p\n",i,a[i],&a[i]);
    }

    for(int i=0; i<3; i++)
    {
        printf("b[%d] = %d Stored at %p\n ",i,b[i],&b[i]);
    }

    for(int i=0; i<3; i++)
    {
        printf("c[%d] = %d Stored at %p\n",i,c[i],&c[i]);
    }

    for(int i=0; i<3; i++)
    {
        printf("d[%d] = %d Stored at %p\n",i,d[i],&d[i]);
    }
    return 0;
}
