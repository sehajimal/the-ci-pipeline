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
* uses string compare in order to determine if user's answer is correct or incorrect
*/

int main(int argc, char *argv[])
{
    char *answerNumOne = "mkdir";          //answers to the three questions (order: linux, C, git)
    char *answerNumTwo = "and";
    char *answerNumThree = "add";


    if (argc == 1)                      //no arguments passed by user
    {
        printf("Usage: quiz [-#] [<answer>] \n Try 'quiz --help' for more information.\n");
        return EXIT_FAILURE;
    }

    if (argc == 2)              //user either is trying to see the question, ask for help, or has entered a bad flag
    {
        if (strcmp(argv[1], "-1") == 0)                      //prints question according to which one user wants
        {
            printf("What is the command to make a new directory in linux?\n");
            return EXIT_SUCCESS;
        }

        else if (strcmp(argv[1], "-2") == 0)
        {
            printf("In C, which logical operator does '&&' represent?\n");
            return EXIT_SUCCESS;
        }

        else if (strcmp(argv[1], "-3") == 0)
        {
            printf("Fill in the blank, what is this word 'git ___'? (Hint: it is used to move a snapshot of a file to the 'staging area') \n");
            return EXIT_SUCCESS;
        }

        else if (strcmp(argv[1], "--help") == 0)
        {
            printf("What is the command used to move a snapshot of a file to the 'staging area'?\n");    //Linux-style help
            return EXIT_SUCCESS;
        }

        else
        {
            printf("Usage: quiz [-#] [<answer>] \n Try 'quiz --help' for more information.\n");    //bad flag
            return EXIT_FAILURE;
        }
    }

    if (argc == 3)                  //user is trying to enter their answer or they are entering a bad flag
    {
        if (strcmp(argv[1], "-1") == 0)              //checks if user is answering questions 1,2 or 3
        {
            if (strcmp(argv[2], answerNumOne) == 0)         
            {
                printf("Correct!\n");   
            }

            else
            {
                printf("Incorrect, please try again\n");
            }
            return EXIT_SUCCESS;
        }

        else if (strcmp(argv[1], "-2") == 0)              
        {
            if (strcmp(argv[2], answerNumTwo) == 0)         
            {
                printf("Correct!\n");   
            }

            else
            {
                printf("Incorrect, please try again\n");
            }
            return EXIT_SUCCESS;
        }

        else if (strcmp(argv[1], "-3") == 0)              
        {
            if (strcmp(argv[2], answerNumThree) == 0)         
            {
                printf("Correct!\n");   
            }

            else
            {
                printf("Incorrect, please try again\n");
            }
            return EXIT_SUCCESS;
        }

        else
        {
            printf("Usage: quiz [-#] [<answer>] \n Try 'quiz --help' for more information.\n");    //bad flag
            return EXIT_FAILURE;
        }
    }
}