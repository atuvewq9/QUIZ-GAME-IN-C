
#include <stdio.h>
#include <string.h>

int main()
{
    int score = 0;
    char answer[50];

    printf("Welcome to the Quiz!\n\n");

    // Question 1
    printf("1. What is the capital of India? ");
    scanf("%s", answer);

    if(strcasecmp(answer, "Delhi") == 0)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Delhi\n\n");
    }

    // Question 2
    printf("2. Which language is used for Python programming? ");
    scanf("%s", answer);

    if(strcasecmp(answer, "English") == 0)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is English\n\n");
    }

    // Question 3
    printf("3. What is 5 + 3? ");
    scanf("%s", answer);

    if(strcmp(answer, "8") == 0)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 8\n\n");
    }

  
    printf("4. Which keyword is used to create a function in C? ");
    scanf("%s", answer);

    if(strcasecmp(answer, "def") == 0)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! One possible answer is void\n\n");
    }

    printf("5. What is the output of 2 * 3 + 4? ");
    scanf("%s", answer);

    if(strcmp(answer, "10") == 0)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 10\n\n");
    }

    printf("Quiz Finished!\n");
    printf("Your score is: %d/5\n", score);

    return 0;
}
