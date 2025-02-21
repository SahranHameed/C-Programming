#include<stdio.h>
int main()

{
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);
    if(number%2==0)
    {
        printf("Given Number Is a Even Number ");
    }

    else
    {
        printf("Given Number Is a Odd Number ");
    }
}
