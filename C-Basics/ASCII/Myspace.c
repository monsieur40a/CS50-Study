/** Write a program that prompts the user for a message, and
        * then outputs the message with its first letter capitalized,
        * with all letters in alternating case.
 *  For simplicity, you may assume that the user will only input lowercase letters and spaces.
*/

#include<stdio.h>
//needed for strlen
#include<string.h>
//needed for toupper
#include<ctype.h>
//needed for get_string (could use pointers but this for slow burn review)
#include<cs50.h>

int main(void)
{
    //geta string from the user
    string string = get_string("Give me a message to convert.\n");

    //iterates over each character of the string up to the strlen(string length)
    for(int i = 0, j = strlen(string), z = 0; i<j; i++)
    {
        //checks if alphanumeric
        if(isalpha(string[i]))
        {
            //rules of the program stipulated every other character capitalized (even characters)
            if(z % 2 == 0)
                printf("%c", toupper(string[i]));
            else
                printf("%c", string[i]);
            //increments/decrements z which keeps track of where you are in the string
            //needed in order to account for spaces
            if(string[i] == ' ')
                z--;
            else
                z++;
        }
        else
            printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}
