#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp)
{
    printf("the code of employee is : %d\n", emp.code);
    printf("the salary of employee is : %f\n", emp.code);
    printf("the name  of employee is : %s\n", emp.code);
}
int main()
{

    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Himanshu");
    show(e1);
    return 0;
}