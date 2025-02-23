//How To Scan & Print Single Element Of Arrays.in Use (For Loop).
#include<stdio.h>
int main()
{
    int i,a[5];

    for(i=0;i<5;i++)
    {
        printf("Enter Your Data: ");
        scanf("%d",&a[i]);
    }


//a[5] = Get All Output in Use The For Loop
    for(i=0;i<5;i++)
    {
        printf("Value a is: %d\n",a[i]);
    }
}


