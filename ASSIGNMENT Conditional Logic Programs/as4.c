/*4.WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Accepting operator and two numbers from the user
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Performing calculation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '/') {
        if (num2 == 0) {
            printf("Error! Division by zero.\n");
        } else {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        }
    } else if (operator == '%') {
        if (num2 == 0) {
            printf("Error! Division by zero.\n");
        } else {
            result = (int)num1 % (int)num2;
            printf("Result: %.2lf\n", result);
        }
    } else {
        printf("Invalid operator entered.\n");
    }

    return 0;
}

