/**
 * Write a program that prints out the total number of characters in the command line arguments given to the program.
 * Ignore whitespace (for example, spaces, newlines, and tab characters), and ignore the program name. For example:

./a.out foo should indicate that 3 characters were given.

./a.out foo bar baz should indicate that 9 characters were given.

./a.out should indicate that 0 characters were given.

Remember, you can pass arguments using the code widget by clicking on the gear icon!

*/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    if(argc == 1)
        {
            printf("Usage: ./tallythearguments argument1 argument2 ...\n");
            return 1;
        }

    int counter = 0;

    for(int i = 1; i < argc; i++)
    {
        counter += strlen(argv[i]);
    }

    printf("Numbers of characters given in arguments: %i\n", counter);

    return 0;
}
