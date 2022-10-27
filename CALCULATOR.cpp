#include <stdio.h>

int main() {
    
	char mathsOperator;
    float num1, num2;
    
	printf("Enter an Operator (+, -, *, /): ");
    scanf("%c", &mathsOperator);
    printf("Enter first Number: ");
    scanf("%f", &num1);
    printf("Enter second Number: ");
    scanf("%f", &num2);

    switch (mathsOperator) {
    case '+':
        printf("Addition Result: %.1f", num1+num2);
        break;
    case '-':
        printf("Subtraction Result: %.1f", num1-num2);
        break;
    case '*':
        printf("Multiplication Result: %.1f", num1*num2);
        break;
    case '/':
        printf("Division Result: %.1f", num1/num2);
        break;
    default:
        printf("Error! Operator is incorrect");
    }
}
