#include<stdio.h>

void upper_case(char *string);
int to_upper (char c);
int to_lower (char c);

//Manual Creation
void upper_case(char *string) //Decleration
{
    printf("User Input string Received is : %s\n",string); //Operation
      for(int i=0; i<string[i]; i++)
         {
          if(to_upper(string[i]))
            {
                continue;
            }
          else if (to_lower(string[i]));
            {
                string[i]=(string[i]-32);
            }
         }
}

int to_upper (char c)
    {
     if(c>=65 && c<=90)
        {
          return 1; //True
        }
    else{
          return 0; //False
        }
    }

int to_lower (char c)
    {

     if(c>=97 && c<= 122)
        {
          return 1; //True
        }
    else{
          return 0; //False
        }
    }

int main()
{
    char s[100];
    printf("Enter a Word: ");
    scanf("%s",s);
    upper_case(s); // Function Call
    printf("Upper Case Letters is : %s\n",s);
}
