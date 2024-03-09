#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float principal, float rate, int time, int n);

int main() {
    float principal, rate;
    int time, n;

    // Input principal amount, annual interest rate, time, and compounding frequency
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time the money is invested for (in years): ");
    scanf("%d", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Convert annual interest rate from percentage to decimal
    rate /= 100;

    // Calculate compound interest
    float compoundInterest = calculateCompoundInterest(principal, rate, time, n);

    // Output the compound interest
    printf("The compound interest after %d years is: %f\n", time, compoundInterest);

    return 0;
}

float calculateCompoundInterest(float principal, float rate, int time, int n) {
    // Calculate compound interest using the formula
    return principal * pow(1 + rate / n, n * time) - principal;
}

