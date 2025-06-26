#include<stdio.h>
int main ()

{

    char a[]="Cyber Security";
    char b[]="Artificial Intelingence";
    char *p = a;
    char *q = b;

    printf("%s\n",a);//Cyber Security
    printf("%d\n",b);//Print Base Addres Of a
    printf("%c\n",*p);//C
    printf("%d\n",*q);//65


//// /////////////////////////////////////
/*    char a[]="Cyber Cecurity";
    char *p = a;

    p[6]='S';//Change One Letter (Pointer)
    //a[6]='S'; //Change One Letter (Array)
     printf("%s\n",a);//Final Output is => Cyber Security
*/

/*
    for(int i=0; i<5; i++)
        printf("\n%c ",a[i]);
        {
           for(int i=5; i<6; i++)
            printf("\n\n%c",'S');
        }
    for(int i=7; i<14; i++)
        printf("\n%c",a[i]);
*/



//// Array (Values & Address) Copy Pointer* By Using For Loop
/*   int a[5]={10,20,30,40,50},i;
   int *b;
   b = a; // or b[0] = a[0]; // or b = a[0];

    for(int i=0; i<5; i++)
        printf("%d\n",b+i); //get All output the address of=(a)

    for(int i=0; i<5; i++)
        printf("\n%d",*(b+i)); //get All output the Value of=(a)

    printf("\nAddress of a: %d\n",&a);
    printf("Address of b: %d\n",&b);
*/


//// Examples Questions ////
/*
    int x[5]={1,2,3,4,5};
    int *ptr; //ptr is Assingned the Address of The Third Element

    ptr = &x[2]; //Array x[2] Address Stored in ptr
    printf("*ptr = %d\n",*ptr); //3
    printf("*(ptr+1) = %d\n",*(ptr+1)); //4
    printf("*(ptr-1) = %d\n",*(ptr-1)); //2
    return 0;
*/


//// Copy Values Array to Array By Using *(Pointer).////
/*
   int a[5]={10,20,30,40,50},i;
    int *b;

    b = a;
    for(int i=0; i<5; i++)
       printf("%d\n",b[i]); // or printf("%d\n",*(b+i));

    //b = a+2;
    //printf("%d\n",b[2]);
    return 0;
*/


//// Copy Values Array to Array ////
/*
    int a[5]={10,20,30,40,50},i;
    int b[5];

    for(int i=0; i<5; i++)
        b[i] = a[i];

    for(int i=0; i<5; i++)
        printf("%d\n",b[i]);  // or printf("%d\n",*(b+i));
        return 0;
*/



//// User Input By Using Scanf & get all output using for loop ////
/*
    int a[5],i;
        printf("Enter Your Input:");

    for(i=0; i<5; i++)
        scanf("%d",a+i); // or scanf("%d",&*(a+i));

    for(int i=0; i<5; i++)
        printf("%d\n",*(a+i)); // or printf("%d\n",a[i]);
        return 0;
*/


/*
    int a[5]={10,20,30,40,50};
    int b = 10;
    printf("%d\n",&a[0]);
    printf("%d\n",&a[1]);
    printf("%d\n",*&a[2]);
    printf("%d\n",&a[3]);
    printf("%d\n",&a[4]);
    printf("%d\n",a[0]);
    printf("%d\n",*a);
    printf("%d\n",*&b);

    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n",*&a[2]);
    printf("%p\n",&a[3]);
    printf("%p\n",&a[4]);
    printf("%p\n",a[0]);
    printf("%p\n",*a);
    printf("%p\n",*&b);
    return 0;
*/
}
