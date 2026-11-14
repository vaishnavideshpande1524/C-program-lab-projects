#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int i, j, len = 0;
    int same = 1;

    printf("Enter a string: ");
    scanf("%s", str1);

    for(i = 0; str1[i] != '\0'; i++)
        len++;

    printf("Length = %d\n", len);

    for(i = 0; str1[i] != '\0'; i++)
        str2[i] = str1[i];

    str2[i] = '\0';

    printf("Copied string = %s\n", str2);

    printf("Reverse = ");

    for(i = len - 1; i >= 0; i--)
        printf("%c", str1[i]);

    for(i = 0; i < len / 2; i++)
    {
        if(str1[i] != str1[len - 1 - i])
        {
            same = 0;
            break;
        }
    }

    if(same == 1)
        printf("\nPalindrome");
    else
        printf("\nNot Palindrome");

    return 0;
}
