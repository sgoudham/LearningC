#include <stdio.h>

int main() {
    char operator; 
    double firstOperand = 0;
    double secondOperand  = 0;

    do {
        printf("Enter An Operator (+, -, *, /):\nEnter 'e' To Exit:\n");
        scanf(" %c", &operator);

        if (operator == 'e') {
            break;
        }

        printf("Enter First Operand: ");
        scanf("%lf", &firstOperand);
        printf("Enter Second Operand: ");
        scanf("%lf", &secondOperand);

        switch (operator) {
            case '+':

                break;

            case '-':

                break;

            case '*':

                break;

            case '/':

                break;

            default:
                printf("Uh Oh! Invalid Operator Entered! Please Try Again!\n\n");
        }
    } while (operator != 'e');

    return 0;
}
