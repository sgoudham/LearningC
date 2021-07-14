typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
} MathOperator;

extern const char operators[];

void add(double firstOperand, double secondOperand);
void subtract(double firstOperand, double secondOperand);
void multiply(double firstOperand, double secondOperand);
void divide(double firstOperand, double secondOperand);
void getOperands(double *firstOperand, double *secondOperand);
