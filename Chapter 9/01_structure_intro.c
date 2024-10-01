#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[];
};
int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 64.54;
    // e1.name = "Haimanshu"; ====>  it won't work
    strcpy(e1.name, "Himanshu");
    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}