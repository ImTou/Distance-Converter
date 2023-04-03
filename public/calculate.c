#include <stdio.h>

int main() {

    int choice;
    double number1, number2;
    printf("Please enter a number: \n1. Plus\n2. Minus\n3. Multiply\n4. Divide\n5. Remainder\nEnter your choice:");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You choose plus to calculate.\n");
        printf("Please enter the first number: ");
        scanf("%lf", &number1);
        printf("Please enter the second number: ");
        scanf("%lf", &number2);
        printf("The result is: %lf", number1 + number2);
    }
    else if (choice == 2) {
        printf("You choose minus to calculate.\n");
        printf("Please enter the first number: ");
        scanf("%lf", &number1);
        printf("Please enter the second number: ");
        scanf("%lf", &number2);
        printf("The result is: %lf", number1 - number2);
    }
    else if (choice == 3) {
        printf("You choose multiply to calculate.\n");
        printf("Please enter the first number: ");
        scanf("%lf", &number1);
        printf("Please enter the second number: ");
        scanf("%lf", &number2);
        printf("The result is: %lf", number1 * number2);
    }
    else if (choice == 4) {
        printf("You choose divide to calculate.\n");
        printf("Please enter the first number: ");
        scanf("%lf", &number1);
        printf("Please enter the second number: ");
        scanf("%lf", &number2);
        printf("The result is: %lf", number1 / number2);
    }
    else if (choice == 5) {
        printf("You choose remainder to calculate.\n");
        printf("Please enter the first number: ");
        scanf("%lf", &number1);
        printf("Please enter the second number: ");
        scanf("%lf", &number2);
        printf("The result is: %d", (int)number1 % (int)number2);
    }
    else {
        printf("Invalid choice");
    }
    return 0;
}
