#include<stdio.h>
#include<stdlib.h>
int main ()

{
    int *ptr , *ptr1 , i;

    ptr=(int*)malloc(3*sizeof(int)); //malloc
    printf("ptr= %p\n",ptr); //Print The Address Of (ptr)

    for(i=0; i<3; i++)
    printf("ptr[%d] = %d\n", i,ptr[i]); //malloc Print

     free(ptr); //Must Using This Function For (malloc,calloc,realloc)

    ptr1=(int*)calloc(3,sizeof(int)); //calloc
    printf("\n ptr1= %p\n",ptr1); //Print The Address Of (ptr1)


    for(i=0; i<3; i++)
    printf("ptr1[%d] = %d\n", i,ptr1[i]); //calloc Print
}



//// DMA User Input With Scanf ////
/*#include<stdio.h>
#include<stdlib.h>
int main ()

{
    int *ptr ,i,n;
    printf("Enter The Number Of Inputs: ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
    printf("ptr= %p\n",ptr);
    printf("Memory Of ptr : %d\n", sizeof(ptr));

    for(i=0; i<n; i++)
    scanf("%d",&ptr[i]);

    for(i=0; i<n; i++)
      printf("ptr[%d] = %d\n", i,ptr[i]);


    /*printf("out put 1 : %d \n",ptr);
    printf("out put 2 : %p \n",&ptr);
    printf("out put 3 : %p \n",ptr);
    printf("out put 4 : %d \n",*ptr);
}*/
