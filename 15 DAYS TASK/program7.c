// c program to create a quiz game having three questions with 4 options and last gives the result.
#include <stdio.h>
#include <stdlib.h>


#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"
#define RESET   "\x1B[0m"

int main() {
    int answer;
    int score = 0;

    printf(CYAN "========== Welcome to the Quiz Game ==========\n" RESET);

    // Question 1

    printf(YELLOW "\nQuestion 1:\n" RESET);
    printf(BLUE "What is the capital of india?\n" RESET);
    printf(GREEN "1. punjab\n" RESET);
    printf(GREEN "2. mumbai\n" RESET);
    printf(GREEN "3. new delhi\n" RESET);
    printf(GREEN "4. india\n" RESET);

    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf(GREEN "Correct!\n" RESET);
        score++;
    } else {
        printf(RED "Wrong! The correct answer is new delhi .\n" RESET);
    }

    // Question 2

    printf(YELLOW "\nQuestion 2:\n" RESET);
    printf(BLUE "Which planet is known as the Red Planet?:-\n" RESET);
    printf(GREEN "1. Earth\n" RESET);
    printf(GREEN "2. Mars\n" RESET);
    printf(GREEN "3. Jupiter\n" RESET);
    printf(GREEN "4. Venus\n" RESET);

    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf(GREEN "Correct!\n" RESET);
        score++;
    } else {
        printf(RED "Wrong! The correct answer is Mars.\n" RESET);
    }

    // Question 3

    printf(YELLOW "\nQuestion 3:\n" RESET);
    printf(BLUE "Who wrote 'Hamlet'?\n" RESET);
    printf(GREEN "1. Mark Twain\n" RESET);
    printf(GREEN "2. Charles Dickens\n" RESET);
    printf(GREEN "3. William Shakespeare\n" RESET);
    printf(GREEN "4. J.K. Rowling\n" RESET);

    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf(GREEN "Correct!\n" RESET);
        score++;
    } else {
        printf(RED "Wrong! The correct answer is William Shakespeare.\n" RESET);
    }

    // Final Score

    printf(CYAN "\n========== Quiz Over ==========\n" RESET);
    printf(MAGENTA "Your final score is: " RESET);
    printf(YELLOW "%d/3\n" RESET, score);

    // Feedback based on score

    if (score == 3) {
        printf(GREEN "Excellent! You got all answers correct.\n" RESET);
    } else if (score == 2) {
        printf(YELLOW "Good job! You got 2 answers correct.\n" RESET);
    } else if (score == 1) {
        printf(RED "You got 1 answer correct. Keep practicing!\n" RESET);
    } else {
        printf(RED "Better luck next time! You got no answers correct.\n" RESET);
    }

    return 0;
}
