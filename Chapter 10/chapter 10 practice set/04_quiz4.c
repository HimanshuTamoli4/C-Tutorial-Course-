 #include <stdio.h>
int main() {
    char name1[50] , name2[50] ;
    int salary1 , salary2 ;
    FILE *ptr ;
    ptr = fopen(" Employee.txt" , "w");
    printf(" Enter the name of employee\n" );
    scanf("%s" , name1);
printf(" Enter the salary of employee\n" );
    scanf("%d" , &salary1);
    printf(" Enter the name of employee\n" );
    scanf("%s" , name2);
printf(" Enter the salary of employee\n" );
    scanf("%d" , &salary2);

fprintf(ptr ," the name and salay of employee 1 is %s , %d\n" , name1 , salary1);
fprintf(ptr ," the name and salay of employee 1 is %s , %d\n" , name2 , salary2);


return 0;
}