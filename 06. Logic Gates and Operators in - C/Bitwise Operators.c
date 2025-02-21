#include<stdio.h>
int main()

{
    int x = 255, y = 260, z=250;

    printf("x & y = %d\n", x&y); // Bitwise AND Operators (Answer = 4)
    printf("x | y = %d\n", x|y); // Bitwise OR Operators (Answer = 511)
    printf("x ^ y = %d\n", x^y); // Bitwise XOR Operators (Answer = 507)
    printf("~z = %d\n", ~z);     // 1'S Complement & Bitwise NOT Operators (Answer = 251) = [Only Get One Output]
    printf("x<<3 = %d\n", x<<3); // Left Shift Operator (Answer = 2040) = [Only Get One Output]
    printf("x>>3 = %d\n", x>>3); // Right Shift Operator (Answer = 31) = [Only Get One Output]
}
