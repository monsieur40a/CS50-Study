/** echo is a Unix command, that, according to its manual page, "display[s] a line of text." For example:

jharvard@run.cs50.net (~): echo This is CS50
This is CS50
Implement your own version of the echo command.
You’ll want to loop through the user’s arguments and print them out one-by-one,
    adding a space between them.
*/

#include<stdio.h>

int main(int argc, char *argv[])
{
    for(int i = 0; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }

    printf("\n");

    return 0;
}
