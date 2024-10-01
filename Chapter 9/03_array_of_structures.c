 #include <stdio.h>
  #include <string.h>
  
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main() {
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name , "Himanshu");


    facebook[1].code = 101;
    facebook[1].salary = 102.78;
    strcpy(facebook[1].name , "Ishita");


return 0;
}