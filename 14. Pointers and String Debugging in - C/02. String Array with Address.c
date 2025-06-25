//// String Array With Address ////
#include<stdio.h>
int main()

{
    char w[]= "mars";
    char x[]= "MarS";
    char y[5]= {'M','A','R','S'};
    char z[]= {'M','A','R','S','\0'};


    for(int i=0; i<sizeof(w); i++)
        {
             printf("w[%d]= '%c::%d' Stored at %p\n",i,w[i],w[i],&w[i]);
        }

    for(int i=0; i<sizeof(x); i++)
        {
             printf("x[%d]= '%c::%d' Stored at %p\n",i,x[i],x[i],&x[i]);
        }

    for(int i=0; i<sizeof(y); i++)
        {
             printf("y[%d]= '%c::%d' Stored at %p\n ",i,y[i],y[i],&y[i]);
        }

    for(int i=0; i<sizeof(z); i++)
        {
             printf("z[%d]= '%c::%d' Stored at %p\n ",i,z[i],z[i],&z[i]);
        }

        printf("w: %s \n ",w);
        printf("x: %s \n ",x);
        printf("y: %s \n ",y);
        printf("z: %s \n ",z);

        return 0;
}



