 #include <stdio.h>
#include <string.h>
 struct account{
    int year ;
    float balance ;
    char name[20];

 };
int main() {
struct account   c[100] ;
c[0].year = 2014 ;
c[0].balance = 5000.54 ;
strcpy(   c[0].name , "Himanshu");

printf(" The name of a customer 1 is %s\n" , c[0].name);
printf(" The opening year of account of a customer 1 is %d\n" , c[0].year);
printf(" The balance of a customer 1 is %f\n" , c[0].balance);


return 0;
}