#include <stdio.h>

// Define the value of PI as a constant macro
#define PI 3.14159

int main() {
    float radius, area;

    // Ask the user to input the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area using the formula: PI * r * r
    area = PI * radius * radius;

    // Display the result up to 2 decimal places
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}

