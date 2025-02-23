// Array Three Diamention Code //
#include<stdio.h>
int main()

{
// 3D Array Initialization.
    int a[2][3][4]={
                     {
                       {1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12}
                     },

                     {
                       {13,14,15,16},
                       {17,18,19,20},
                       {21,22,23,24}
                     }
                   };

    // Access and print an element
        printf("%d\n",a[1][1][1]); // Should print 18
        return 0;
}
