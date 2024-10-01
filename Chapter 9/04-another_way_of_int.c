 #include <stdio.h>
 
struct employee
{
    int code;
    float salary;
    char name[20];
};
int main() {
  struct employee Himanshu = {100,34.23,"Himanshu"};
   printf("code is %d:\n" , Himanshu.code);
      printf("salary is %f:\n" , Himanshu.salary);
   printf("name is %s:\n" , Himanshu.name);

return 0;
}