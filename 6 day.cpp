#include <stdio.h>

int main(void) {
    int n, i;
    int odd;
    int sum = 0;

    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The odd natural numbers are:\n");
    for (i = 1; i <= n; i++) {
        odd = 2 * i - 1;   // formula for k-th odd number
        printf("%d ", odd);
        sum += odd;
    }

    printf("\nThe Sum of odd Natural Number up to %d terms = %d\n", n, sum);

    return 0;
}
