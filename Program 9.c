#include <stdio.h>

int main()
{
    int n, original, temp;
    int digit, digits = 0, sum = 0;
    int i, power;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++)
            power = power * digit;

        sum = sum + power;
        temp = temp / 10;
    }

    printf("Number of digits = %d\n", digits);
    printf("Sum = %d\n", sum);

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
