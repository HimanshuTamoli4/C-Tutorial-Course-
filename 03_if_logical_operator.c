#include <stdio.h>
int main()
{
    int age;
    int vippass = 0;
    vippass = 1;
    printf("Enter yoyur  age \n");
    scanf("%d\n", &age);

    if ((age <= 80 && age >= 18) || vippass == 1)
    {
        printf("You are above 18 and below 80 ,you can  drive\n  ");
    }
    else
    {
        printf("You can not drive\n ");
    }

    return 0;
}