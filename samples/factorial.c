#include <cio.h>

int fact(int n)
{
    int i;

    for (i = n - 1; i > 1; i--)
        n *= i;

    return n;
}

int main()
{
    int n;

    n = input_int("Enter an integer: ");
    print("The factorial of %d is %d\n", n, fact(n));

    return input_char("Press enter to continue...");
}
