#include<stdio.h>

int add (int *nums, int count); // function prototype(Decleration)


int main()
{
    int a[] = {10,20,30,40,50,60,70,80};
    printf("Sum is %d\n",add(a,sizeof(a)/sizeof(int))); // Function Call
}

// operation //
        //a[0] adres    ,   8
int add (int *nums, int count)
{
    int result = 0;
    for(int i=0; i<count; i++)
    {
        result = nums[i] + result; //a[0] adres=22010 + i=0 * int value 4 byte + result=0 ==22010 .
        printf("Result : %d, Nums : %d\n",result,nums[i]);
    }
    return result;
}

