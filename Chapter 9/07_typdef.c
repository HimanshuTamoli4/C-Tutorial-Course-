 #include <stdio.h>
 #include <string.h>
 typedef struct employee{
    int code ;
    float salary;
    char name[20];
 }emp;

void show(emp emp1)
{
    printf("the code of employee is : %d\n", emp1.code);
    printf("the salary of employee is : %f\n", emp1.code);
    printf("the name  of employee is : %s\n", emp1.code);
}
int main() {
    // declaring ptr and e1

        emp e1;
        emp *ptr ;

// pointing ptr to e1 
ptr = &e1;
 
// set the4 niumber values for e1

ptr->code = 101;
 ptr->salary = 11.01;
    strcpy(ptr->name, "Himanshu");
    show(e1);


 

return 0;
}