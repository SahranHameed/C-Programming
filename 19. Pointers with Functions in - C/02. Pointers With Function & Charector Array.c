

//////////////////////////////////////////////////////////
#include<stdio.h>
#include<ctype.h> //toupper(Library Function).
//user input lowercase letters to converting to uppercase
//Using BY Library Function
// void => non Retunable police (Day-30)

void upper_case(char *string) //Decleration
{
    printf("User Input string Received is : %s\n",string); //Operation
      for(int i=0; i<sizeof(string); i++)
        string[i]= toupper(string[i]);
}

int main()
{
    char s[100];
    printf("Enter a Word: ");
    scanf("%s",s);
    upper_case(s); // Function Call
    printf("Upper Case Letters is : %s\n",s);
}





/*#include<stdio.h>

char* upper_case(char* string) //Decleration
{
    printf("string value is : %s\n",string); //Operation
}

int main()
{
    char s[100];
    printf("Enter a Word: ");
    scanf("%s",s);
    printf("The String is Stored Address : %d\n",s); //6421984
    printf("The String is Stored Address : %d\n",&s[0]); //6421984
    upper_case(s); // Function Call
}*/
