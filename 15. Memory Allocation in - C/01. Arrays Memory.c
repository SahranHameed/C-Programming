#include<stdio.h>
int main ()

{
    int a[10], n,i;
    printf("Enter The Number Of Inputs: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("The Value in Array : \n");

    for(i=0; i<10; i++)
        printf("a[%d] = %d\n",i,a[i]);

        printf("Memory Of a : %d\n", sizeof(a));

}
