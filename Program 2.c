#include <stdio.h>

int main()
{
    float length, width, radius, base, height;
    float area, perimeter, circumference;

    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Rectangle Area = %.2f\n", area);
    printf("Rectangle Perimeter = %.2f\n", perimeter);

    printf("\nEnter radius of circle: ");
    scanf("%f", &radius);

    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;

    printf("Circle Area = %.2f\n", area);
    printf("Circle Circumference = %.2f\n", circumference);

    printf("\nEnter base and height of triangle: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;
    printf("Triangle Area = %.2f\n", area);

    return 0;
}
