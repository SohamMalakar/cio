#include <cio.h>

int main()
{
    float a, b;
    char op;

    a = input_double("Enter a: ");
    op = input_char("Enter an operator: ");
    b = input_double("Enter b: ");

    switch (op)
    {
    case '+':
        print("%f + %f = %f\n", a, b, a + b);
        break;
    case '-':
        print("%f - %f = %f\n", a, b, a - b);
        break;
    case '*':
        print("%f * %f = %f\n", a, b, a * b);
        break;
    case '/':
        print("%f / %f = %f\n", a, b, a / b);
        break;
    default:
        print("Invalid operator.\n");
    }

    return input_char("Press enter to continue...");
}
