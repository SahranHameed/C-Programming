#include<stdio.h>
int main()

{
    int result;
    printf("Enter Your Result: ");
    scanf("%d", &result);

if(result >=85 && result <=100)
    {
        printf("Your Position Is A");
    }


else if (result>=75 && result <85)
    {
        printf("Your Position Is B");
    }


else if (result>=65 && result <75)
    {
        printf("Your Position Is C");
    }


else if (result>=45 && result <65)
    {
        printf("Your Position Is S");
    }


else if (result>=0 && result <45)
    {
        printf("Your Position Is W");
    }

else
    {
        printf("Invalid Input1");
    }

}
