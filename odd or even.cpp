#include <stdio.h>

int main() {
    int num;

    // Ask the user to input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Condition for Even: remainder is 0 when divided by 2
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    }

    // Condition for Odd: remainder is not 0 (or is 1 / -1) when divided by 2
    if (num % 2 != 0) {
        printf("%d is odd.\n", num);
    }

    return 0;
}

