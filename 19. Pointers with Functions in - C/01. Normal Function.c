#include<stdio.h>
int is_even(int num); // function prototype

// check if number is even
// return 1
// return 0 if not even

int main() //function call
{
   int n;
   int result;
   while(1)
  {
   printf("Enter a Input: ");
   scanf("%d",&n);
   if(n==0)
    break;
  }
  result = is_even(n);
  printf("Result is %d\n",result);
  if(result)
    {
        printf("The Number is an Even Number\n");
    }
  else
    {
        printf("It is an Odd Number\n");
    }
}
int is_even(int num)
{
  if (num%2==0)
       {
           return 1;
       }
  else {
           return 0;
       }
}


