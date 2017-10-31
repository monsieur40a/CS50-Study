/**
 * Write a program that takes a positive decimal value as input and prints out that number in binary notation.
*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    long unsigned int intval;

    printf("Please enter a positive integer (Up to 2^32 - 1, long unsigned) to be converted to binary: ");
    scanf("%lu", &intval);

    long unsigned int _remainder;
    long unsigned int quotient = intval;
    long unsigned int arrofbinaryseq[32] = {0};
    int i = 0;

    do
    {
        _remainder = quotient % 2;
        arrofbinaryseq[i] = _remainder;
        i++;
        quotient = quotient/2;

    }
    while(quotient != 0);

    printf("Positive integer converted to binary: ");



    for(int z = 31; z >= 0; z--)
    {
        if(z == 8 || z == 16 || z == 24)
            printf("%lu ", arrofbinaryseq[z]);
        else
            printf("%lu", arrofbinaryseq[z]);
    }

    printf("\n");

}
