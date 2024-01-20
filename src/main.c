#include "stdlib.h"
#include "stdio.h"
#include "math.h"

void initialize(float *numberA, float *numberB) {
    printf("Welcome to the basic calculator!\n");

    printf("Please, enter the first number: ");
    scanf("%f", numberA);
    printf("Please, enter the second number: ");
    scanf("%f", numberB);
}

void instructions(int *operation) {
    printf("Please, choose an operation:\n");
    printf("1 - Sum\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("5 - Modulus\n");
    printf("6 - Exit\n");

    printf("Operation: ");
    scanf("%d", operation);
}

int main() {
    float numberA, numberB, result;
    int operation;

    while(1) {
        instructions(&operation);
        if(operation == 6) {
            printf("Exiting the calculator.\n");
            break;
        }

        initialize(&numberA, &numberB);
        switch (operation) {
        case 1:
            result = numberA + numberB;
            break;
        case 2:
            result = numberA - numberB;
            break;
        case 3:
            result = numberA * numberB;
            break;
        case 4:
            result = numberA / numberB;
            break;
        case 5:
            result = fmod(numberA, numberB);
            break;
        default:
            printf("Invalid operation. Please choose again.\n");
            continue;
        }

        printf("Result: %.2f\n\n", result);
    }

    printf("Thank you for using the basic calculator!\n");
    exit(1);
}
