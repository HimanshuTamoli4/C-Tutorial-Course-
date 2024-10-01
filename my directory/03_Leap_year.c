#include <stdio.h>
int main()
{
    int year ;
    printf("Enter the year\n" );
    scanf("%d\n", &year);
    if(year%4 == 0 && year %100 != 0  && year%400==0) {
        printf("Year is leap year\n");
        
    }
else{
    printf("Year is not a laap year\n");

}
return 0;

}