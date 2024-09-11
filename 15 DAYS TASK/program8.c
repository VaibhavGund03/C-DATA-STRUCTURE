#include <stdio.h>
#include <stdlib.h>

// ANSI escape codes for colors
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define RESET   "\x1B[0m"

int main() {
    char operator;
    double num1, num2, result;

   
    printf(BLUE "========== Colorful Calculator ==========\n" RESET);
    printf(GREEN "Choose an operation: \n");
    printf(YELLOW "+ for Addition\n");
    printf(YELLOW "- for Subtraction\n");
    printf(YELLOW "* for Multiplication\n");
    printf(YELLOW "/ for Division\n" RESET);
    
    
    printf(BLUE "\nEnter operation: " RESET);
    scanf(" %c", &operator);

    printf(BLUE "Enter first number: " RESET);
    scanf("%lf", &num1);

    printf(BLUE "Enter second number: " RESET);
    scanf("%lf", &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf(GREEN "\nResult: %.2lf + %.2lf = %.2lf\n" RESET, num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf(RED "\nResult: %.2lf - %.2lf = %.2lf\n" RESET, num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf(YELLOW "\nResult: %.2lf * %.2lf = %.2lf\n" RESET, num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf(BLUE "\nResult: %.2lf / %.2lf = %.2lf\n" RESET, num1, num2, result);
            } else {
                printf(RED "\nError: Division by zero is not allowed!\n" RESET);
            }
            break;
        default:
            printf(RED "\nError: Invalid operator!\n" RESET);
            return 1;
    }
   return 0;
}
