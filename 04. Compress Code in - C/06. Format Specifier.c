 #include<stdio.h>
int main ()

{
    int    a = 100 ;
    float  b = 10.22445566;
    double c = 10.22445566;

    printf("a = %d\n", a); // Integer
    printf("a = %06d\n\n", a); // Zero Flag Length & Precision

    printf("b = %f\n", b); // Float
    printf("Double Of c = %f\n", c); // Double Equel To Float
    printf("c = %.2f\n\n", b); // Same Double Data Type But ( Pinnady Warakkodiya Perumanattai Mattam Tatty Taruhiradhu. Output Answar Only 2 Digit )

    printf("a = %i\n\n", a); // Signed Indeger (Signed +ve Number) & (Unsigned -ve Number)

    printf("Exponential Value Of b = %e\n", b); // Exponential Format Of Data.
    printf("Exponential Value Of b = %E\n\n", b); // Capital Letter (E) In Used In Exponential Form Of Data.

    printf("Octal Of a = %o\n\n", a); // Octal Value Of Integer Will Be Found

    printf("Hexadecimal Of a = %x\n", a); // Hexadecimal Number Of Given Indeger...(x = Outout Small Letter)
    printf("Hexadecimal Of a = %X\n", a); // Hexadecimal Number Of Given Indeger...(X = Outout Capital Letter)
    printf("Hexadecimal Of a = %#X\n", a); // Precision Modifiers ( Mention To Hexadecimal Number = Output  0X64 )


}
