#include <stdio.h>
int main()
{
    int a, b, c;
    FILE *ptr;
    ptr = fopen("01_quiz1.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The value of a , b and c  is %d %d %d\n", a, b, c);

    return 0;
}
