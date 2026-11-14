#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (m1 < 35 || m2 < 35 || m3 < 35 || m4 < 35 || m5 < 35)
        printf("Result = Fail\n");
    else if (percentage >= 75)
        printf("Result = Distinction\n");
    else if (percentage >= 65)
        printf("Result = First Class\n");
    else if (percentage >= 55)
        printf("Result = Second Class\n");
    else
        printf("Result = Pass Class\n");

    return 0;
}
