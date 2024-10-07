/* Sehaj Ajimal, 400511220, Oct 06 2024
*
* This is the quiz.c source code
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Main
*
* utilizes if else structure to determine user input and output questions/feedback
* Description of this function (if non-obvious)
*/

int main(int argc, char *argv[])
{
    char *answerNumOne = "mkdir";
    char *answerNumTwo = "&&";
    char *answerNumThree = "git add";


    if (argc == 1)
    {
        printf("Usage: quiz [-#] [<answer>] \n Try 'quiz --help' for more information.\n");
        return EXIT_FAILURE;
    }

    if (argc == 2)
    {
        if (strcmp(argv[1], "-1") == 0)
        {
            printf("What is the command to make a new directory in linux?\n");
            return EXIT_SUCCESS;
        }

        else if (strcmp(argv[1], "-2") == 0)
        {
            printf("What is the boolean operater for 'and' in C?\n");
            return EXIT_SUCCESS;
        }

        else if (strcmp(argv[1], "-3") == 0)
        {
            printf("What is the command used to move a snapshot of a file to the 'staging area' in git?\n");
            return EXIT_SUCCESS;
        }

        else if (strcmp(argv[1], "--help") == 0)
        {
            printf("What is the command used to move a snapshot of a file to the 'staging area'?\n");
            return EXIT_SUCCESS;
        }

        else
        {
            printf("Usage: quiz [-#] [<answer>] \n Try 'quiz --help' for more information.");
            return EXIT_FAILURE;
        }
    }

    if (argc == 3)
    {
        if (strcmp(argv[1], "-1") == 0)
        {
            if (strcmp(argv[2], "answerNumOne") == 0)
            {
                printf("Correct!");   
            }

            else
            {
                printf("Incorrect, please try again");
            }
        }
    }
}