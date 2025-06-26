#include<stdio.h>
int main()

{
    int arr[3]={10,20,30};
    int *p = arr;//base adres i kodutale podum
    int (*ptr)[3]=&arr;
    //*ptr = &arr;

    printf("Value Of p = %d\n",p);//p Value Of arr Address => 6422020
    printf("Value Of ptr = %d\n",ptr);//ptr Value Of arr Address => 6422020
    printf("Point Of arr = %d\n",*p);// => 10
    printf("Using Single * = %d\n",*ptr);// => 6422020
    printf("Using Double ** = %d\n",**ptr);// *1st print arr addres = (arr[0] // **2nd print arr address after print arr[0] address after check value of arr[0] => 10;


    printf("\nValue of arr = %d\n",arr);// => 6422020
    printf("Address of arr = %d\n", &arr);// => 6422020
    printf("Address of arr[0] = %d\n", &arr[0]);// => 6422020
    printf("Address of arr[1] = %d\n", &arr[1]);// => 6422024
    printf("Address of arr[2] = %d\n", &arr[2]);// => 6422028

    printf("\nAddress of*ptr = %d\n", &ptr);// => 6422008
    printf("Address of*ptr[0] = %d\n", &ptr[0]);// => 6422020
    printf("Address of *ptr[1] = %d\n", &ptr[1]);// => 6422032
    printf("Address of *ptr[2] = %d\n", &ptr[2]);// => 6422044
    return 0;
}
