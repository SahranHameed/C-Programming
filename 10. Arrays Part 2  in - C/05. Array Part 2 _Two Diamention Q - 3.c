//User Decides How Many Time They Going to Fill The Data.in Use (For Loop).
#include<stdio.h>
int main()

{
   int i,j,a[10],qt;

    printf("Enter Your Quantity: ");
    scanf("%d",&qt);

    for(i=0;i<qt;i++)

           {
               printf("Decide  Your Qt: ");
               scanf("%d",&a[i]);
           }

    for(i=0;i<qt;i++)
            {
                printf("%d\n",a[i]);
            }

}
