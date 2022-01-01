#include <cio.h>

int main()
{
    string name;
    int age;

    name = input("Enter your name: ");
    age = input_int("Enter your age: ");

    print("Hello %s!\n", name);
    print("You are %d years old.\n", age);

    return input_char("Press enter to continue...");
}
