#include <stdio.h>
#include "utility.h"

const char operators[] = {'+', '-', '*', '/'};

char enumToString(MathOperator mathOperator) {
    return operators[mathOperator];
}

void println(double firstOperand, MathOperator mathOperator, double secondOperand, double result) {
    printf("%0.2lf %c %0.2lf = %0.2lf\n\n", firstOperand, enumToString(mathOperator), secondOperand, result);
}

double doOperation(double firstOperand, double secondOperand, MathOperator mathOperator) {
    double result = 0.0;

    switch (mathOperator) {
        case ADD:
            result = firstOperand + secondOperand;
            break;
        
        case SUBTRACT:
            result = firstOperand - secondOperand;
            break;

        case MULTIPLY:
            result = firstOperand * secondOperand;
            break;

        case DIVIDE: 
            result = firstOperand / secondOperand;
            break;

        default:
            printf("Sorry don't recognise the given operator!\n");
            break;
        }
    
    return result;
}

void getOperands(double *firstOperand, double *secondOperand) {
    printf("Enter First Operand: ");
    scanf("%lf", firstOperand);
    printf("Enter Second Operand: ");
    scanf("%lf", secondOperand);
}

void add(double firstOperand, double secondOperand) {
    double result = doOperation(firstOperand, secondOperand, ADD);
    println(firstOperand, ADD, secondOperand, result);
}

void subtract(double firstOperand, double secondOperand) {
    double result = doOperation(firstOperand, secondOperand, SUBTRACT);
    println(firstOperand, SUBTRACT, secondOperand, result);
}

void multiply(double firstOperand, double secondOperand) {
    double result = doOperation(firstOperand, secondOperand, MULTIPLY);
    println(firstOperand, MULTIPLY, secondOperand, result);
}

void divide(double firstOperand, double secondOperand) {
    double result = doOperation(firstOperand, secondOperand, DIVIDE);
    println(firstOperand, DIVIDE, secondOperand, result);
}
