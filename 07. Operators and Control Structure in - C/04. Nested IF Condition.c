#include<stdio.h>
int main()

{
    int number;
    printf("Enter a Input: ");
    scanf("%d", &number);

    if(number >=0) //Parent Condition
        {
            if (number <10) //Child Condition
            {
                printf("Number Within 0....9");
            }
            else
            {
                printf("Given Number Is Up To 10");
            }
        }
    else
    {
         printf("Given Number Is Negative Number");
    }
}
