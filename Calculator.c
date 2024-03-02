#include <stdio.h>
#include <math.h>

double getValidNumber();
char getValidOperator();

int main() {
    char operator;
    double num1, num2, result;

    printf("\n \033[5;34m Calculator : \033[0m\n");

    do {
        

        num1 = getValidNumber();
        if (num1 == 0) {
            printf("Exiting calculator...\n");
            break;
        }

        operator = getValidOperator();
        
        num2 = getValidNumber();

        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error: Division by zero\n");
                    continue;
                }
                break;
            case '^':
                result = pow(num1, num2);
                break;
            default:
                printf("Error: Invalid operator\n");
                continue;
        }

        printf("Result: %.2lf\n", result);

    } while (num1 != 0);

    return 0;
}

// Function to get a valid number from the user
double getValidNumber() {
    double num;
    while (1) {
        printf("Enter a number: ");
        if (scanf("%lf", &num) == 1) {
            break;
        } else {
            printf("Error: Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n'); // Clear input buffer
        }
    }
    return num;
}

// Function to get a valid operator from the user
char getValidOperator() {
    char op;
    while (1) {
        printf("Enter an operator (+, -, *, /, ^): ");
        if (scanf(" %c", &op) == 1 && (op == '+' || op == '-' || op == '*' || op == '/' || op == '^')) {
            break;
        } else {
            printf("Error: Invalid input. Please enter a valid operator.\n");
            while (getchar() != '\n'); // Clear input buffer
        }
    }
    return op;
}

