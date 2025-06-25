//How To Find The Maximum Value Of User Input By Using Array.
#include<stdio.h>
int main()

{
   int i,a[10];
   int qt,max;

    printf("Enter Your Quantity: ");
    scanf("%d",&qt);

    for(i=0;i<qt;i++)
           {
               printf("Decide  Your Qt: ");
               scanf("%d",&a[i]);
           }

    max=a[i];

    for(i=1;i<qt;i++)
       {
         if(max<a[i])
            {
                max=a[i];
            }
            //printf("Compare All Input Data: %d\n",max);
       }

//Compare All Input Data Find Maximum Number.
      printf("Compare All Input Data Find Maximum Number is: %d\n",max);
      printf("of Numbers: %d\n",qt);
      return  0;
}



///////////////////////////////////////
/*#include<stdio.h>
int main()

{
   int i,a[10];
   int n,sum=1;

    printf("Enter The Number of Input Values(less or equal to 10) : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
           {
               printf("Enter a Value: ");
               scanf("%d",&a[i]);
               //sum = sum + a[i];
           }
   printf("Sum of Given Numbers: \n");

    for(i=0;i<n;i++)

         printf("%d\t",a[i]);
    printf("\nsum of nos.: %d\n",n);
    return  0;

}*/

//////////////////////////////////////////////

/*#include<stdio.h>
int main()
{
    int i,a[10],x;

    printf("Enter Your Quantity: ");
        scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        printf("Enter Your Data: ");
        scanf("%d",&a[i]);
    }


//a[5] = Get All Output in Use The For Loop
    for(i=0;i<x;i++)
    {
        printf("%d\n",a[i]);
    }
}*/
