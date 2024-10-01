#include <stdio.h>
int main()
{
    char ch;
    // 97-122 = a-z
    // 60-90 = A-Z
    // 45-57 = digits
    // else = special symbol
    printf("Enter the charcter\n");

    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("it is lowercase\n");
    }
    else if (ch > 60 && ch < 90)
    {
        printf(" it is  upercase\n");
    }
    else if (ch > 45 && ch < 57)
    {
        printf(" it is a digit\n");
    }
    else
    {
        printf(" it is a special symbol\n");
    }

    return 0;
}