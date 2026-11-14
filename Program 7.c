#include <stdio.h>

int main()
{
    int units;
    float bill = 0;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 30)
        bill = units * 1.30;
    else if (units <= 150)
        bill = (30 * 1.30) + (units - 30) * 2.50;
    else if (units <= 250)
        bill = (30 * 1.30) + (120 * 2.50) + (units - 150) * 4.00;
    else
        bill = (30 * 1.30) + (120 * 2.50) +
               (100 * 4.00) + (units - 250) * 6.00;

    bill = bill + 100;

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}
