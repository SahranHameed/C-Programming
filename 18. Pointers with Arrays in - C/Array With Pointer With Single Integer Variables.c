#include<stdio.h>
int main ()
//// Array Type Of Pointer With Single Integer Variables ////
{
    int a=3, b=5, c=7,i;
    int *ptr[3]; //Array Type Of Pointer

   *ptr = &a;
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    /*printf("Addres Of a = %d\n", &a); //6422044
    printf("Addres Of b = %d\n", &b); //6422040
    printf("Addres Of c = %d\n", &c); //6422036

    printf("\nptr[0] = %d\n", ptr[0]); //6422044
    printf("ptr[1] = %d\n", ptr[1]); //6422040
    printf("ptr[2] = %d\n", ptr[2]); //6422036

    printf("\n*ptr[0] = %d\n", *ptr[0]); //3
    printf("*ptr[1] = %d\n", *ptr[1]); //5
    printf("*ptr[2] = %d\n", *ptr[2]); //7

    printf("\nAddres Of ptr[0] = %d\n", &ptr[0]); //6422000
    printf("Addres Of ptr[1] = %d\n", &ptr[1]); //6422008
    printf("Addres Of ptr[2] = %d\n", &ptr[2]); //6422016
*/
    printf("\nBase Address of ptr[0] = %d\n", &ptr);//Base Address of ptr[0] = 6422000

    printf("Addres Of a = %d\n", &a); //6422044
    printf("\nValue Of ptr[0] = %d\n", ptr[0]); //6422044
    printf("\nPoint Addres After Get Value *ptr[0] = %d\n", *ptr[0]); //3
    printf("\nAddres Of ptr[0] = %d\n", &ptr[0]); //6422000

}
