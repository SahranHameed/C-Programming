#include<stdio.h>
#include<stdlib.h>
int main ()

{
    int *ptr ;

    ptr=(int*)malloc(3*sizeof(int)); //malloc
    printf("ptr= %p\n",ptr); //Print The Address Of (ptr)

    ptr= realloc(ptr,10*sizeof(int)); // Re Alloc Method

    free(ptr); // Free() Method

    int *ptr1=(int*)calloc(3,sizeof(int)); //calloc
    printf("\n ptr1= %p\n",ptr1); //Print The Address Of (ptr1)
}

