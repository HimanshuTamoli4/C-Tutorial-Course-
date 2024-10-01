#include <stdio.h>
int main() {
float tax = 0 , income ;


printf("Enter Your income\n");
scanf("%f", &income);

if((income >= 250000.0) && (income <= 500000.0)) 
{
    tax =  tax + 0.05 * (income - 250000.0);
}
else if((income >= 500000.0) && (income <= 1000000.0)) 
{
    tax = tax + 0.20* (income - 500000.0);
}
else if((income >= 100000.0 )) 
{
    tax = tax + 0.30 * (income - 1000000.0);
}
printf("Your net income tax to be paid is %f\n" , tax); 

return 0;
}