#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2;  // Can only take two inputs.

    do {
        printf(" Calculator Menu :\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Checking user choice
        switch(choice) {
            // Addition
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
                break;

            // Subtraction
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
                break;

            // Multiplication
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("%.2f x %.2f = %.2f", num1, num2, num1 * num2);
                break;

            // Division
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if(num2 == 0) {
                    printf("Cannot divide by zero.");
                }
                else {
                    printf("%.2f / %.2f = %.3f", num1, num2, num1 / num2);
                }
                break;

            // Exit
            case 5:
                printf("Goodbye!");
                break;

            // Error handling
            default:
                printf("Invalid choice. Try again.");
        }
    } while(choice != 5);

    return 0;
}
