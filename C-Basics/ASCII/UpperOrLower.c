/** Complete the following program that prompts the user to enter an alphabetical character
       * and determines whether the character is uppercase or lowercase.
*/

#include <stdio.h>
//cs50.h is need for get_char, otherwise scanf would be used
#include <cs50.h>

int main(void)
{
    for(int i = 0; i < 2; i++)
    {
    char prompt = get_char("Please enter an alphabetical character: ");

    //could also use ifupper or islower
    if(prompt >= 'A' && prompt <= 'Z')
        printf("Thanks for the uppercase letter!\n");
    else if(prompt >= 'a' && prompt <= 'z')
        printf("Thanks for the lowercase letter!\n");
    else
        printf("Try again, non-alphabetic input entered.\n");
    }

    return 0;
}
