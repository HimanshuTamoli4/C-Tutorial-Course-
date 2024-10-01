#include <stdio.h>
int main()
{
    int *p2;
    int *p1;
    p2 = (int *)100;
    p1 = (int *)200;
    if (p1 > p2)
    {
        printf("P1 is greater than p2");
    }
    else
    {
        printf("P2 is greater than p1");
    }
    int x = 4, y = 6, z;
    int *ptr1 = &x;
    int *ptr2 = &y;
    printf(" the value of p1 and p2 is  %u\n nd %u\n", ptr1 , ptr2);
    z = ptr1 - ptr2;
    printf(" the value of subtraction ptr1 and ptr2  is %u\n", z);

    return 0;
}