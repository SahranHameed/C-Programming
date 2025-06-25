///// Creat Student Collage Managment System /////
#include<stdio.h>
struct students //By Using Our Own Data Type
{
    char sname[20];
    int sid;
    int age;
};

int main()
{
    int x;
    struct students a[10];

    for(x=0;x<2;x++)
  {
    printf("Enter Student Details (Your Name, Your ID, Your Age) of a Student: ");
    scanf("%s",a[x].sname);
    scanf("%d",&a[x].sid);
    scanf("%d",&a[x].age);
  }

   for(x=0;x<2;x++)
   {
    printf("%s Details: \n",a[x]);
    printf("Student Name: %s\n",a[x].sname);
    printf("Student ID: %d\n",a[x].sid);
    printf("Student Age: %d\n\n",a[x].age);

    printf("\n-----------------------------------\n\n");
   }

}
