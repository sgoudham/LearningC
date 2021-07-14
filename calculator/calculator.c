#include <stdio.h>
#include "utility.h"

int main() {
    char operator; 
    double firstOperand = 0;
    double secondOperand  = 0;

    do {
        printf("Enter An Operator (+, -, *, /):\nEnter 'e' To Exit:\n");
        scanf(" %c", &operator);
        while (getchar() != '\n');

        if (operator == 'e') {
            break;
        }

        getOperands(&firstOperand, &secondOperand);

        switch (operator) {
            case '+':
                add(firstOperand, secondOperand);
                break;

            case '-':
                subtract(firstOperand, secondOperand);
                break;

            case '*':
                multiply(firstOperand, secondOperand);
                break;

            case '/':
                divide(firstOperand, secondOperand);
                break;

            default:
                printf("Uh Oh! Invalid Operator Entered! Please Try Again!\n\n");
        }
    } while (operator != 'e');

    return 0;
}
