#include<stdio.h>
int main()

{
    int number;
    printf("Enter a Input: ");
    scanf("%d", &number);
    if(number>0)

          if(number>100)
        {
             printf("Great than 100\n");
        }

          else if(number<100)
        {
             printf("Less than 100\n");
        }

          else
        {
             printf("Hundred \n");
        }


    else if(number<0)
    {
        printf("Negative Number");
    }

    else
    {
        printf("Zero");
    }

}
