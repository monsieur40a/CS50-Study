/** Write a program that prompts the user to enter a lowercase letter
    * (be sure the user provides the desired input!).
    * Use bitwise operators to capitalize the letter.  Do the same for uppercase to lowercase.
*/

#include <stdio.h>
//cs50.h is needed for get_char, otherwise scanf would be used
#include <cs50.h>
//ctype.h is needed for islower
#include <ctype.h>

int main(void)
{
    char prompt;

    do
    {
    prompt = get_char("Please enter a lowercase letter: ");
    }
    while(!islower(prompt));

    //the Exclusive Or Operator, ^, is a bitwise operator and for matching values swaps them to 0
    //The first three bits of ASCII uppercase characters are the same, same for lower
    //The 32s position in uppercase (0) vs lowercase (1) so we want to switch a 1 to 0 for
        //conversion from lower to uppercase is then done with the ^ operator and the integer 32
        //32 has a 1 in this place so comparing 1 to 1 with ^ results in 0, which is what we want
    printf("Bitwise conversion of lowercase to uppercase: %c\n", prompt ^= 32);

    char prompt2;

    do
    {
    prompt2 = get_char("Please enter an uppercase letter: ");
    }
    while(!isupper(prompt2));

    //Bitwise |, Or operator, if value is a 1, it puts a 1 in the final result
    //Using 32, which has a 1 in the 32s position, we are guaranteed to convert to lowercase
        //since lowercase values have a 1 in the 32s position
    printf("Bitwise conversion of uppercase to lowercase: %c\n", prompt |= 32);



}
