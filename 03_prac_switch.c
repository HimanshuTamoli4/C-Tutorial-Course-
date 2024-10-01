
 
// write a programme to find the grades of students

#include <stdio.h>
int main() {
    int grade;
    printf("enter your grade \n");
    scanf("%d" , &grade);
     
     if(grade>90 && grade <=100) {
        printf(" Your grade is A\n");
     }
     else  if(grade>60 && grade <=90) {
        printf(" Your grade is b\n");
     }

else  if(grade>45 && grade <=60 ) {
        printf(" Your grade is c\n");
     }

else  if(grade>33 && grade <=45) {
        printf(" Your grade is d\n");
     }

else 
printf(" You are failed \n");


return 0;








}