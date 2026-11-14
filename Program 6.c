#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (1)
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Remainder");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Addition = %d\n", a + b);
                break;

            case 2:
                printf("Subtraction = %d\n", a - b);
                break;

            case 3:
                printf("Multiplication = %d\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Division = %d\n", a / b);
                else
                    printf("Cannot divide by zero.\n");
                break;

            case 5:
                if (b != 0)
                    printf("Remainder = %d\n", a % b);
                else
                    printf("Cannot find remainder with zero.\n");
                break;

            case 6:
                printf("Program ended.\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }
}
