#include <stdio.h>

int main() {
    int a, b;
    int multiplication, division,remainder, addition, subtraction;

    printf("Enter any two numbers a and b: ");
    scanf("%d %d", &a, &b);

    multiplication = a * b;
    division = a / b;       // (Note: integer division)
    addition = a + b;
    subtraction = a - b;
    remainder = a%b;

    printf("Multiplication of given numbers is %d\n", multiplication);
    printf("Division of given numbers is %d\n", division);
    printf("Addition of given numbers is %d\n", addition);
    printf("Subtraction of given numbers is %d\n", subtraction);
    printf("Remainder of given numbers is %d\n",remainder);

    return 0;
}