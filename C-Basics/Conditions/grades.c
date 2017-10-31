/** There’s a bug in this program such that if the user inputs the number 95, all four statements print out:

jharvard@run.cs50.net (~): ./a.out
Enter a valid grade: 95
You got an A!
You got a B!
You got a C!
You got a D!


Modify the program such that if the user inputs the number 95, only the correct statement will print out:

jharvard@run.cs50.net (~): ./a.out
Enter a valid grade: 95
You got an A!

*/

#include<stdio.h>

int main(void)
{
    printf("Enter a valid grade (0-100): ");

    int grade;

    scanf("%i", &grade);

    if(grade >= 90 && grade <=100)
        printf("You got an A!\n");
    else if(grade >= 80 && grade <=89)
        printf("You got a B!\n");
    else if(grade >= 70 && grade <=79)
        printf("You got a C!\n");
    else if(grade >= 60 && grade <=69)
        printf("You got a D!\n");
    else if(grade >= 0 && grade <=59)
        printf("You got an F!\n");

    return 0;
}
