#include <stdio.h>
#include <string.h>

int main()
{
    double firstnumber, secondnumber, result;
    char operator;
    char instruction[10];

    printf("OPERATORS:-\n'+' for Addition\n'-' for Subtraction\n"
           "'*' for Multiplication\n'/' for Division\n\n");

    do
    {
        printf("Enter the calculation (for example, 12.5 + 4): ");

        if (scanf("%lf %c %lf", &firstnumber, &operator, &secondnumber) != 3)
        {
            printf("Invalid input.\n");
            return 1;
        }

        switch (operator)
        {
            case '+':
                result = firstnumber + secondnumber;
                break;

            case '-':
                result = firstnumber - secondnumber;
                break;

            case '*':
                result = firstnumber * secondnumber;
                break;

            case '/':
                if (secondnumber == 0)
                {
                    printf("Error: Cannot divide by zero.\n");
                    return 1;
                }
                result = firstnumber / secondnumber;
                break;

            default:
                printf("Invalid operator. Use +, -, *, or /.\n");
                return 1;
        }

        printf("RESULT: %.2f\n", result);
        printf("Do you want to do more calculations? Enter 'yes' to continue or 'stop' to quit: ");

        if (scanf("%9s", instruction) != 1)
        {
            printf("Invalid input!.\n");
            return 1;
        }

        if (strcmp(instruction, "yes") != 0 && strcmp(instruction, "Yes") != 0 && strcmp(instruction, "stop") != 0 && strcmp(instruction, "Stop") != 0)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }
    while (strcmp(instruction, "stop") != 0 && strcmp(instruction, "Stop") != 0);

    return 0;
}