#include<stdio.h>

#define PI 3.14 // We Can Creat Constant Variable By Using #define

//#undef PI  // To Undifined The Constant Variable By Using #undef

int main ()
{
    float area ;
    int radius = 5 ;
    area = PI * radius * radius ;
    printf("PI = %f", area);

}




//////////////////////////// Function ( On / Off )
#include<stdio.h>

//#define AB 10 // On Function.
//#define CD 20 // On Function.

//#undef AB   // Off Function.
//#undef CD   // Off Function.

//int main ()
//{

//   printf("AB = %d\n", AB );
//   printf("CD = %d\n", CD );
//}





///////////////////// Constant Variable Calculation ( Not Success )
#include<stdio.h>


#define AB 10 + 10 - 2
#define CD 20 - 10 + 2
#define EF 10 * 10 / 2 + 5
#define GH 20 / 10 * 2 - 3

//int main ()
//{

//    printf("AB = %d\n", AB );
//    printf("CD = %d\n", CD );
//    printf("EF = %d\n", EF );
//    printf("GH = %d\n", GH );
//}
