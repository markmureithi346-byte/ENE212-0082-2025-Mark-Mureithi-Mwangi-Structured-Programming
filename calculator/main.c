#include <stdio.h>
#include <stdlib.h>

/*
    ==========
    START
        DECLARE num1, num2, result
        DECLARE operator

        PROMPT "Enter first number: "
        INPUT num1

        PROMPT "Enter an operator (+, -, *, /): "
        INPUT operator

        PROMPT "Enter second number: "
        INPUT num2

        SWITCH operator
            CASE '+'
                result = num1 + num2
                OUTPUT "Result: ", result
            CASE '/'
                IF num2 != 0
                    result = num1 / num2
                    OUTPUT "Result: ", result
                ELSE
                    OUTPUT "Error: Cannot divide by zero."
                END IF
            OTHERWISE
                OUTPUT "Invalid operator."
        END SWITCH

        RETURN 0
    END
*/

int main()
{
    /* --- Declare the variables needed for the calculation --- */
    double num1, num2, result;
    char operator;

    /* --- Read the first number --- */
    printf("Enter first number: ");
    scanf("%lf",&num1);

    /* --- Read the operator to perform (leading space skips whitespace) --- */
    printf("Enter an operator (+, -,*, /): ");
    scanf(" %c",&operator);

    /* --- Read the second number --- */
    printf("Enter second number: ");
    scanf("%lf", &num2);

    /* --- Carry out the operation selected by the user --- */
    switch (operator){
        case '+':
            result = num1 + num2;
            printf("Result; %.2lf\n", result);
            break;
        case'/':
            /* Guard against division by zero before dividing */
            if (num2 !=0) {
                result = num1/ num2;
                printf("Result: %.2lf\n", result);
            }else{
                printf("Error: Cannor divide bt zero.\n");
            }
            break;

        /* Any operator other than the handled cases is rejected */
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}
