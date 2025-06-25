#include<stdio.h>
#include<stdlib.h>
int main()

{
  int choice,senior,normal,child;


  printf(" 1. Senior Citizen\n 2. Normal Age\n 3. Child\n 4. Exit\n\n");

  printf("Enter Your Choice: ");
  scanf("%d", &choice);

  switch(choice)
  {

  case 1:
    //printf("Ticket Booked With Concession\n\n");
    printf("Enter Your Age: \n");
    scanf("%d",&senior);
       if(senior>=60)
       {
           printf("Senior Citizen");
       }
       else
       {
           printf("You Are Not Senior Citizen");
       }

    break;

  case 2:
    //printf("Normal Booking\n\n");
    printf("Enter Your Age: \n");
    scanf("%d",&normal);
       if(normal<60 && normal>=18)
       {
           printf("Normal Age");
       }
       else
       {
           printf("Not Eligble to Normal Age ");
       }
    break;

  case 3:
    //printf("Ticket Fair For Child\n\n");
    printf("Enter Your Age: \n");
    scanf("%d",&child);
       if(child<18 && child>=4)
       {
           printf("Child");
       }
       else
       {
           printf("Not Eligble For Child");
       }
    break;

  case 4:
    exit(0);

  default:
    printf("Please Choice Between 1 to 4\n");
    break;

  }

}

/////////////////////////////////////////////////
////// Creat a Simple Calculator Using Switch Statment.//////
/*#include<stdio.h>
#include<stdlib.h>
int main()

{
 char op;
  int num1,num2;


  printf("Enter Your 1st Input:");
  scanf("%d", &num1);

  printf("Enter Your 2nd Input:");
  scanf("%d", &num2);

  printf("Enter Your Operator: ");
  scanf("\n%c", &op);

  switch(op)
  {
case '+':
    printf("%d",num1+num2);
    break;

case '-':
    printf("%d",num1-num2);
    break;

case '*':
    printf("%d",num1*num2);
    break;

case '/':
    printf("%d",num1/num2);
    break;

default:
    printf("Invalid Input\n");

  }

}*/


////////////////////////////////////////////////
/*#include<stdio.h>
int main()

{
    int a[13];
    int table;

    printf("what table you want to print? ");
    scanf("%d", &table);

    for(int j=0; j<13; j++)
      {
        a[j]= j * table;
      }

    for( int i=0; i<13; i++)
      {
        printf("a[%d]  = %d\n",i ,a[i]);
      }
}*/
