// by using c programing  to create a simple LIC return ammount predictor 
#include <stdio.h>
#include <math.h>

// Define color codes
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

double calculateMaturityAmount(double premium, int years, double rate) {
    double totalAmount = premium * years; // Total paid by the policyholder
    double maturityAmount = totalAmount * pow(1 + rate / 100, years); // Compound interest formula
    return maturityAmount;
}
int main() {
    double premium, rate, maturityAmount;
    int years;
    // Take user input
    printf(BLUE "Enter the annual premium amount: " RESET);
    scanf("%lf", &premium);

    printf(BLUE "Enter the policy term (in years): " RESET);
    scanf("%d", &years);

    printf(BLUE "Enter the expected rate of return (in percentage): " RESET);
    scanf("%lf", &rate);

    maturityAmount = calculateMaturityAmount(premium, years, rate);

    // Display results with color
    printf(YELLOW "\n--------------------------------------\n" RESET);
    printf(GREEN "Your total premium paid over %d years: " YELLOW "%.2lf\n", years, premium * years);
    printf(GREEN "Predicted maturity amount (with compound interest): " YELLOW "%.2lf\n", maturityAmount);
    printf(YELLOW "--------------------------------------\n" RESET);

    return 0;
}
