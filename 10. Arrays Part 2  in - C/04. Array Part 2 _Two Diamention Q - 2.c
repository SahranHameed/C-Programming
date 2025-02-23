//How To Scan & Print 2D Arrays. in Use (Nested For Loop).
#include<stdio.h>
int main()

{
   int i,j,a[4][3];

    for(i=0;i<4;i++)

       {
         for(j=0;j<3;j++)

           {
               printf("Enter Your Data: ");
               scanf("%d",&a[i][j]);
           }
       }

    for(i=0;i<4;i++)

       {
          for(j=0;j<3;j++)
            {
                printf("%d\n",a[i][j]);
            }
       }

}
