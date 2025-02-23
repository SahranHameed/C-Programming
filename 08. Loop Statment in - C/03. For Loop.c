////////// Get Input For User [Password & User Name] ////////////
#include<stdio.h>
#include<string.h>
int main ()

{
    char y,x [10];
    //int  y;
    printf("Enter Your Name: ");
    scanf("%s",x);
    y = strlen(x);

    if (y>5)
        {
           while(y>0)
                {
                    printf("%c\n",y);
                    //printf("Hello World\n",y);
                    y=y-1;
                }

        }

           else {
                    printf("User Name Should Be Morethen 5 Letters ",y);
                }
}





/*#include<stdio.h>
int main ()

{
    int x=0;

    for(x;x<=10;x++)

    {
        printf("Value Of X Is %d\n",x);
    }

}*/
