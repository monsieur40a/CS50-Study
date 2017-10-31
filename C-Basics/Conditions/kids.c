/**
 * Write a program that prompts the user to take a guess at the average number of children per family in the United States.
 * Let the user know whether he/she got the answer right!
*/

#include<stdio.h>

int main(void)
{
    printf("Guess the average number of kids in the US per family. (whole number): ");

    int guess;

    scanf("%i", &guess);

    if(guess == 2)
        printf("You guys right! Two per family is the average.\n");
    else
        printf("You have failed.  You guessed wrong.\n");

}
