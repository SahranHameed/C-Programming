#include<stdio.h>
int main ()

{
    int * i ; //Pointer

    printf("size of int = %d\n",sizeof(int)); // Data Type
    printf("size of float = %d\n",sizeof(float)); // Data Type
    printf("size of char = %d\n",sizeof(char)); // Data Type
    printf("size of double = %d\n",sizeof(double)); // Data Type ( increase "float" data type in stored memory size )
    printf("size of short = %d\n",sizeof(short)); // Modifier ( Modifier To Reduce "integer" Data Type In Memory Allocation )
    printf("size of long = %d\n",sizeof(long));  // Modifier ( Modifier To Increase "integer" Data Type In Memory Allocation )
    printf("size of void = %d\n",sizeof(void)); // Data Type ( Memory Size Is = 0 )
    printf("int *pointer has size = %d\n",sizeof(i)); // Pointer ( Memory Size Is = 8 )
}


//// Variables in Stores Data ////
/*#include<stdio.h>
int main ()

{
    int a = 2147483647;
    short b = 32767; // This Is The Maximum Value Of 2 Bytes, If You Type More Values ( Eg:-32768 The Output Will Be -32768 )
    short signed c = 32768; // The Output Will Be -32768
    short unsigned d = 65535;


    printf("int value = %d\n", a); // Same Output 2147483647 ( Because "integer" Is 4 Bytes )
    printf("short value = %d\n", b);
    printf("short signed value = %d\n", c);
    printf("short unsigned value = %d\n", d);

}*/
